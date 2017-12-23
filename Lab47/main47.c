/*
 * main47.c
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <errno.h>
#include <unistd.h>
int openSocket(){
	struct addrinfo* res;
	struct addrinfo hints;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = PF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	if(getaddrinfo("127.0.0.1","288886",&hints,&res)==-1){
		fprintf(stderr,"[client]:can not resolve address\n");
	}
	// generate socket to server
	int resultSocket = socket(res->ai_family,res->ai_socktype,res->ai_protocol);
	if(resultSocket==-1){
		fprintf(stderr,"[client]:can not open socket\n");
	}
	int connectionResult = connect(resultSocket,res->ai_addr,res->ai_addrlen);
	freeaddrinfo(res);
	if(connectionResult==-1){
		fprintf(stderr,"[client]:can not connect to socket\n");
	}
	return resultSocket;
}
int main(int argc, char **argv) {
	int serverSocket = openSocket();
	char receivedData[256];
	int bytesReceived = recv(serverSocket,receivedData,255,0);
	receivedData[bytesReceived] = '\0';
	printf("got result from client:%s\n",receivedData);
	fflush(stdout);
	return 0;
}

