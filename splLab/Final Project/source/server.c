#include "essentials.h"

void *read_msg();
void *send_msg();
void str_overwrite_stdout() {
  printf("\r%s", "> ");
  fflush(stdout);
}

//! Global Variables
int SSFD = 0, CSFD = 0;
char client_name[10] = {};
char host_name[10] = {};

int main(int argc, char **args) {
  //? Incorrect command line arg error handaling
  if (argc != 2 || (atoi(args[1]) > 41951 || atoi(args[1]) <= 1024)) {
    fprintf(stderr, "Error: Port not provided.\n");
    printf("Useage: %s <port number>\n", args[0]);
    exit(EXIT_FAILURE);
  }
  int port = atoi(args[1]);

  //? Creating a new socket
  SSFD = socket(AF_INET, SOCK_STREAM, 0);
  //? Exception handling
  if (SSFD < 0) {
    printf("Failed to create new socket.\n");
    exit(EXIT_FAILURE);
  }

  //? Server and Client socket info setting
  struct sockaddr_in s_info, c_info;
  int s_addr_len = sizeof(s_info);
  int c_addr_len = sizeof(c_info);
  memset(&s_info, 0, s_addr_len);
  memset(&c_info, 0, c_addr_len);

  s_info.sin_family = AF_INET;
  s_info.sin_port = htons(port);
  s_info.sin_addr.s_addr = INADDR_ANY;

  //? Binding floating SSFD to an address
  int err_check = bind(SSFD, (SSA *)&s_info, s_addr_len);
  if (err_check != 0) {
    printf("Failed to Bind socket.\n");
    exit(EXIT_FAILURE);
  }

  //? Listening/Waiting for incoming client connection request
  listen(SSFD, 1);
  printf("Server listening on port %d\n", ntohs(s_info.sin_port));

  //? Getting local socket address
  err_check = getsockname(SSFD, (SSA *)&s_info, (socklen_t *)&s_addr_len);
  if (err_check == 0) {
    printf("Socket Address: %s || Port: %d\n", inet_ntoa(s_info.sin_addr),
           ntohs(s_info.sin_port));
  } else {
    printf("Failed to initialize server.\n");
    exit(EXIT_FAILURE);
  }

  while (1) {
    //? Accepting connection request from client
    CSFD = accept(SSFD, (SSA *)&c_info, (socklen_t *)&c_addr_len);

    //? Getting peer socket address and name
    getpeername(CSFD, (SSA *)&c_info, (socklen_t *)&c_addr_len);
    printf("Client %s:%d joined the chat.\n", inet_ntoa(c_info.sin_addr),
           ntohs(c_info.sin_port));

    //? Conversation

    //* Sending host name to client and recieving client name
    printf("Enter your name: ");
    fgets(host_name, 10, stdin);
    host_name[strcspn(host_name, "\n")] = '\0';
    send(CSFD, host_name, 10, 0);
    recv(CSFD, client_name, 10, 0);

    /*
    ! Using multiple threads to parallelly read and write incoming and
    ! outgoing buffer/messages
    */
    pthread_t read_thread, write_thread;

    pthread_create(&read_thread, NULL, read_msg, NULL);
    pthread_create(&write_thread, NULL, send_msg, NULL);

    pthread_join(write_thread, NULL);
    pthread_join(read_thread, NULL);
  }
}

void *read_msg() {
  char msg_in[MSG_LEN] = {};
  while (1) {
    int recieve = recv(CSFD, msg_in, MSG_LEN, 0);
    if (recieve > 0) {
      printf("\%s: %s\n", client_name, msg_in);
      str_overwrite_stdout();
    } else if (recieve == 0) {
      break;
    } else if (strncmp(msg_in, "exit", 4) == 0) {
      break;
    }
  }
}

void *send_msg() {
  char msg_out[MSG_LEN] = {};
  while (1) {
    str_overwrite_stdout();
    while (fgets(msg_out, MSG_LEN, stdin) != NULL) {
      msg_out[strcspn(msg_out, "\n")] = '\0';
      if (strlen(msg_out) == 0) {
        str_overwrite_stdout();
      } else {
        break;
      }
    }
    send(CSFD, msg_out, MSG_LEN, 0);
    if (strncmp(msg_out, "exit", 4) == 0) {
      close(SSFD);
      exit(EXIT_SUCCESS);
    }
  }
}