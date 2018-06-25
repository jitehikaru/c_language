#include    <sys/types.h>
#include    <sys/socket.h>
#include    <netinet/in.h>
#include    <arpa/inet.h>
#include    <apue.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <unistd.h>

#define REQUEST 400
#define REPLY   400

#define UDP_SERV_PORT   7777
#define TCP_SERV_PORT   8888
#define TTCP_SERV_PORT  9999

/* Following shortens all the type casts of pointer arguments*/
#define SA struct sockaddr *

void    err_quit(const char *,...);
void    err_sys(const char *,...);
int     read_stream(int, char *, int);
