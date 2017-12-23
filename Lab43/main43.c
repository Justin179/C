/*
 * main43.c
 *
 *  Created on: 2017年12月23日
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void error(char* message){
	fprintf(stderr,message);
	exit(1);
}
int main(int argc, char **argv) {
	FILE* file1 = fopen("myfile","w");
	if(!file1){
		fprintf(stderr,"file can not be created\n");
	}
	pid_t pid = fork();
	if(!pid){ // pid==0 -> child process 去把output寫到file
		if(dup2(fileno(file1),1)==-1){
			error("can not redirect standard output\n");
		}
	}
	printf("will be done in both parent and child process, with pid=%d\n",pid);
	fflush(stdout);
	int pid_status;
	if(waitpid(pid,&pid_status,0)==1){
		error("error when waiting child process");
	}
	if(execlp("ls","ls","-al",NULL)==-1){
		error("can not ls\n");
	}

	return 0;
}

