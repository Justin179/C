/*
 * main45.c
 *
 *  Created on: 2017�~12��23��
 *      Author: Administrator
 */

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
void processSignal(int signal){
	fprintf(stderr,"got signal no.%d\n",signal);
}
void handleSignal(){
	struct sigaction action;
	action.sa_handler = processSignal;
	sigemptyset(&action.sa_mask);
	action.sa_flags = 0;
	if(sigaction(SIGINT, &action, NULL)==-1){
		fprintf(stderr,"can not map handler\n");
		exit(2);
	}

}
int main(int argc, char **argv) {
	char message[1000];
	printf("try to press ctrl+c\n");
	fflush(stdout); // �L�X��console

	fgets(message,500,stdin); // ���o�qconsole���J����r
	printf("the message is %s\n",message); // �L�X��

	return 0;
}

