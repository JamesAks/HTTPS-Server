#include <stdio.h>
#include <WinSock2.h>
#include "Server.h"

struct Server serv_constructor(int domain, int service, int protocol, int port, void (* launch)(void))
{

    struct Server server;

    server.domain = domain;
    server.service = service;
    server.protocol = protocol;
    server.port =  port;

    server.address.sin_family = domain;
    server.address.sin_port = int_to_bits(port);


    return server;
};