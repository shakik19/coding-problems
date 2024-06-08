#ifndef ESSENTIALS
#define ESSENTIALS

//? All necessary header files
#include <arpa/inet.h>
#include <ctype.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

//? Macros
#define MSG_LEN 513
//? File descriptor macros
#define SSFD server_socket_fd
#define CSFD client_socket_fd

//? Socket address
#define SSA struct sockaddr
#endif