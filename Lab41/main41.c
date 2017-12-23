/*
 * main41.c
 *
 *  Created on: 2017年12月23日
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
	pid_t pid = fork(); // pid為fork的回傳值(pid!=0-> parent process; pid==0-> child process)

	if(pid==-1){
		printf("process can't be forked \n");
	} else {
		printf("pid=%d \n",pid);
		printf("fork success \n");
		fflush(stdout);
	}

	if(!pid){ // pid==0(false), child process
		if(execlp("ls","ls","-1",NULL)==-1){
			fprintf(stderr,"exec failed, due to ... %s\n",strerror(errno));
			return 1;
		}
	}

	printf("start print something again:");
	fflush(stdout);
	execlp("ls","ls","-al","..",NULL);

	return 0;
}

