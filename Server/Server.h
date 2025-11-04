#include <stdio.h>
#include <WinSock2.h>

struct Server{

    int domain;
    int service;
    int protocol;
    int port;

    struct sockaddr_in address;

    int socket;
    void (* launch)(void);

};

struct Server serv_constructor(int domain, int service, int protocol, int port);