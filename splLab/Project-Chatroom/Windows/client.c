#include "essentials.h"

void *send_msg();
void *read_msg();
void override_stdout()
{
  printf("\r%s", "> ");
  fflush(stdout);
}

//! Globar variables
int CSFD = 0;
bool s_exit_flag = false;
bool c_exit_flag = false;
char client_name[10] = {};
char host_name[10] = {};

int main(int argc, char **args)
{
  //? Incorrect command line arg error handaling
  if (argc != 2 || (atoi(args[1]) > 41951 || atoi(args[1]) <= 1024))
  {
    fprintf(stderr, "Error: Set your port correctly.\n");
    printf("Useage: %s <port number>\n", args[0]);
    printf("Range 1025 - 41951\n");
    exit(EXIT_FAILURE);
  }
  int port = atoi(args[1]);

  //? Creating a new socket
  CSFD = socket(AF_INET, SOCK_STREAM, 0);
  //? Exception handling
  if (CSFD < 0)
  {
    printf("Failed to create new socket\n");
    exit(EXIT_FAILURE);
  }

  //? Client Server socket info setting
  struct sockaddr_in s_info, c_info;
  int s_addr_len = sizeof(s_info);
  int c_addr_len = sizeof(c_info);
  memset(&s_info, 0, s_addr_len);
  memset(&c_info, 0, c_addr_len);

  s_info.sin_addr.s_addr = inet_addr("127.0.0.1");
  s_info.sin_family = AF_INET;
  s_info.sin_port = htons(port);

  //? Requesting host server to connect/pair client
  int err_check = connect(CSFD, (SSA *)&s_info, s_addr_len);
  if (err_check != 0)
  {
    printf("Failed to connect to the host server\n");
    exit(EXIT_FAILURE);
  }
  else
  {
    printf("Connected to host server 127.0.0.1:%s\n", args[1]);
  }

  getsockname(CSFD, (SSA *)&c_info, (socklen_t *)&c_addr_len);
  getpeername(CSFD, (SSA *)&s_info, (socklen_t *)&s_addr_len);

  //? Conversation
  /*
! Using multiple threads to parallelly read and write incoming and
! outgoing buffer/messages
*/
  //! Asking client's name and getting host name
  recv(CSFD, host_name, 10, 0);
  printf("Enter your name: ");
  fgets(client_name, 10, stdin);
  client_name[strcspn(client_name, "\n")] = '\0';
  send(CSFD, client_name, 10, 0);

  pthread_t read_thread, write_thread;

  pthread_create(&read_thread, NULL, (void *)read_msg, NULL);
  pthread_create(&write_thread, NULL, (void *)send_msg, NULL);

  pthread_join(write_thread, NULL);
  pthread_join(read_thread, NULL);
}

void *read_msg()
{
  char msg_in[MSG_LEN] = {};
  while (1)
  {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int recieve = recv(CSFD, msg_in, MSG_LEN, 0);
    if (strncmp(msg_in, "exit", 4) == 0)
    {
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_RED);
      printf("\r%s left the chat.\n", host_name);
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_GREEN);
      override_stdout();
      break;
    }
    if (recieve > 0)
    {
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_RED);
      printf("\r%s: %s\n", host_name, msg_in);
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_GREEN);
      override_stdout();
    }
    else if (recieve == 0)
    {
      break;
    }
    else if (strncmp(msg_in, "exit", 4) == 0)
    {
      close(CSFD);
      exit(EXIT_SUCCESS);
    }
  }
}

void *send_msg()
{
  char msg_out[MSG_LEN] = {};
  while (1)
  {
    override_stdout();
    while (fgets(msg_out, MSG_LEN, stdin) != NULL)
    {
      msg_out[strcspn(msg_out, "\n")] = '\0';
      if (strlen(msg_out) == 0)
      {
        override_stdout();
      }
      else
      {
        break;
      }
    }
    send(CSFD, msg_out, MSG_LEN, 0);
    if (strncmp(msg_out, "exit", 4) == 0)
    {
      close(CSFD);
      exit(EXIT_SUCCESS);
    }
  }
}