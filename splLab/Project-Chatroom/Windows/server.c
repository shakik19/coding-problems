/*
? Introduction:
!	This is one of the most premitive type networking c-project
!	which enables two user to communicate through machine connected via
!	same ethernet switches(network).(Also works in a single machine which
!	require to use two different terminal window.)

? Tools used:
!	It uses core  system tools such as Socket and thread to establish connection
!	and communicate via text messages.

? How to use:
!	To use the program first a user has to host the server. To do that
!	Simply he has to compile the server.c file and then run it with
!	a command line argument, which is the port number he wants the clients
! to connect to. The port no. ranges between 1024 to 41951.
!	The client side has to do the same but in this case he has to provide
!	the port number using which the server has been hosted.

*	constraints:
! Name must be no more than 9 characters.
!	Text messages has a limit of 512 characters
*/

#include "essentials.h"

void *read_msg();
void *send_msg();
void override_stdout()
{
  printf("\r%s", "> ");
  fflush(stdout);
}

//! Global Variables
int SSFD = 0, CSFD = 0;
char client_name[10] = {};
char host_name[10] = {};

int main(int argc, char **args)
{
  //? Incorrect command line arg error handaling
  if (argc != 2 || (atoi(args[1]) > 41951 || atoi(args[1]) <= 1024))
  {
    fprintf(stderr, "Error: Set your port coorectly.\n");
    printf("Useage: %s <port number>\n", args[0]);
    exit(EXIT_FAILURE);
  }
  int port = atoi(args[1]);

  //? Creating a new socket
  SSFD = socket(AF_INET, SOCK_STREAM, 0);
  //? Exception handling
  if (SSFD < 0)
  {
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
  if (err_check != 0)
  {
    printf("Failed to Bind socket.\n");
    exit(EXIT_FAILURE);
  }

  //? Listening/Waiting for incoming client connection request
  listen(SSFD, 1);
  printf("Server listening on port %d\n", ntohs(s_info.sin_port));

  //? Getting local socket address
  err_check = getsockname(SSFD, (SSA *)&s_info, (socklen_t *)&s_addr_len);
  if (err_check == 0)
  {
    printf("Socket Address: %s || Port: %d\n", inet_ntoa(s_info.sin_addr),
           ntohs(s_info.sin_port));
  }
  else
  {
    printf("Failed to initialize server.\n");
    exit(EXIT_FAILURE);
  }

  while (1)
  {
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
      printf("\r%s left the chat.\n", client_name);
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_GREEN);
      override_stdout();
      break;
    }
    if (recieve > 0)
    {
      SetConsoleTextAttribute(hConsole,
                              FOREGROUND_RED);
      printf("\%s: %s\n", client_name, msg_in);
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
      break;
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
      send(CSFD, msg_out, MSG_LEN, 0);
      close(SSFD);
      exit(EXIT_SUCCESS);
    }
  }
}
