#include "essentials.h"

void *send_msg();
void *read_msg();
void str_overwrite_stdout()
{
  printf("\r%s", "> ");
  fflush(stdout);
}

typedef struct data
{
  char name[10];
  char msg[MSG_LEN];
} DATA;

DATA client;
DATA host;

//! Globar variables
int CSFD = 0;
bool s_exit_flag = false;
bool c_exit_flag = false;
char client_name[10] = {};
char host_name[10] = {};
FILE *fptr;

int main(int argc, char **args)
{
  fptr = fopen("conv_client.txt", "w");
  //? Incorrect command line arg error handaling
  if (argc != 2 || (atoi(args[1]) > 41951 || atoi(args[1]) <= 1024))
  {
    fprintf(stderr, "Error: Set your port correctly.\n");
    printf("Useage: %s <port number>\n", args[0]);
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
  recv(CSFD, host.name, 10, 0);
  printf("Enter your name: ");
  fgets(client.name, 10, stdin);
  client.name[strcspn(client_name, "\n")] = '\0';
  send(CSFD, client.name, 10, 0);

  pthread_t read_thread, write_thread;

  pthread_create(&read_thread, NULL, (void *)read_msg, NULL);
  pthread_create(&write_thread, NULL, (void *)send_msg, NULL);

  pthread_join(write_thread, NULL);
  pthread_join(read_thread, NULL);
}

void *read_msg()
{
  host.msg;
  while (1)
  {
    int recieve = recv(CSFD, host.msg, MSG_LEN, 0);
    if (recieve > 0)
    {
      printf("\r\033[31m%s: %s\033[0m\n", host.name, host.msg);
      str_overwrite_stdout();
      fputs(host.name, fptr);
      fputs("> ", fptr);
      fputs(host.msg, fptr);
      fputs("\n", fptr);
    }
    else if (recieve == 0)
    {
      break;
    }
    else if (strncmp(host.msg, "exit", 4) == 0)
    {
      close(CSFD);
      exit(EXIT_SUCCESS);
    }
  }
}

void *send_msg()
{
  client.msg;
  while (1)
  {
    str_overwrite_stdout();
    while (fgets(client.msg, MSG_LEN, stdin) != NULL)
    {
      client.msg[strcspn(client.msg, "\n")] = '\0';
      if (strlen(client.msg) == 0)
      {
        str_overwrite_stdout();
      }
      else
      {
        break;
      }
    }
    send(CSFD, client.msg, MSG_LEN, 0);
    fputs(client.name, fptr);
    fputs("> ", fptr);
    fputs(client.msg, fptr);
    fputs("\n", fptr);
    if (strncmp(client.msg, "exit", 4) == 0)
    {
      close(CSFD);
      exit(EXIT_SUCCESS);
    }
  }
}