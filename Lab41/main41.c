/*
 * main41.c
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
int main(int argc, char **argv) {

	printf("start call something else:");
	fflush(stdout);

	// try to clone process
	pid_t pid = fork();
	if(pid==-1){
		printf("process can't be forked \n");
	} else {
		printf("fork success \n");
	}

	return 0;
}

