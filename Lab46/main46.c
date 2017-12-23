/*
 * main46.c
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <errno.h>
#include <unistd.h>
int initSocket(){
	int listenerDescriptor = socket(PF_INET,SOCK_STREAM,0);
	if(listenerDescriptor == -1){
		fprintf(stderr,"can not bind socket\n");
		exit(1);
	}
	int reuse = 1;
	if(setsockopt(listenerDescriptor,SOL_SOCKET,SO_REUSEADDR,(char*) &reuse,sizeof(int)) == -1){
		fprintf(stderr,"can not set and reuse the socket\n");
		exit(1);
	}
	return listenerDescriptor;
}
void bindSocket(int listenerDescriptor){
	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t) htons(28886);
	name.sin_addr.s_addr = htonl(INADDR_ANY);
	int connect = bind(listenerDescriptor,(struct sockaddr*) &name,sizeof(name));
	if(connect == -1){
		fprintf(stderr,"can not connect socket\n");
		exit(1);
	}
	if(listen(listenerDescriptor,10)==-1){
		fprintf(stderr,"can not listen\n");
	} else {
		printf("start listening...");
		fflush(stdout);
	}
	while(1){
		struct sockaddr_storage clientAddr;
		socklen_t addressSize = sizeof(clientAddr);
		int connectDescriptor = accept(listenerDescriptor,(struct sockaddr*) &clientAddr, &addressSize);
		char* message = "!!!hello world server!!!";
		send(connectDescriptor,message,strlen(message),0);
		close(connectDescriptor);
	}
}
int main(int argc, char **argv) {
	int serverDescriptor = initSocket();
	bindSocket(serverDescriptor);
	return 0;
}

