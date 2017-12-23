/*
 * main42.c
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>

void* sayHi(){
	int i;
	for(i=0; i<5; i++){
		sleep(1);
		printf("hihi\n");
		fflush(stdout);
	}
	return NULL;
}

void* sayHo() {
	int i;
	for (i = 0; i < 5; i++) {
		sleep(2);
		printf("hoho\n");
		fflush(stdout);
	}
	return NULL;
}

void error(char* message){
	fprintf(stderr,"%s,%s",message,strerror(errno));
	exit(1);
}

int main(int argc, char **argv) {
	pthread_t t0;
	pthread_t t1;

	printf("before t0\n");
	fflush(stdout);
	if(pthread_create(&t0,NULL,sayHi,NULL)==-1){
		printf("can't create thread t0\n");
		fflush(stdout);
	}

	printf("before t1\n");
	fflush(stdout);
	if(pthread_create(&t1,NULL,sayHo,NULL)==-1){
		printf("can't create thread t1\n");
		fflush(stdout);
	}

	printf("after t0 \n");
	fflush(stdout);
	void* result;
	if(pthread_join(t0,&result)==-1){
		printf("can't join thread t0\n");
		fflush(stdout);
	}

	printf("after t1 \n");
	fflush(stdout);
	if(pthread_join(t1,&result)==-1){
		printf("can't join thread t0\n");
		fflush(stdout);
	}

	return 0;
}

