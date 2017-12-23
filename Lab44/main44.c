/*
 * main44.c
 *
 *  Created on: 2017年12月23日
 *      Author: Administrator
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
void error(char* message){
	fprintf(stderr,message);
	exit(1);
}
int main(int argc, char **argv) {
	int fd[2]; // pipe
	if(pipe(fd)==-1){
		error("can not open a pipe\n");
	}
	printf("fd[0]=%d,fd[1]=%d\n",fd[0],fd[1]);
	fflush(stdout);
	pid_t pid = fork();
	if(pid==-1){
		error("can not fork process\n");
	}

	// child process
	if(!pid){ // pid==0(false) 如果是child process
		dup2(fd[1],1); // standard output 導到 pipe
		close(fd[0]); // 關掉pipe的standard input
		if(execlp("ls","ls","-al",NULL)==-1){
			error("can not do ls");
		}
	}

	// parent
	dup2(fd[0],0);
	close(fd[1]);
	char line[255];
	while(fgets(line,255,stdin)){
		fprintf(stderr,"[parent][%lu]:result=%s\n",strlen(line),line);
	}
	int pid_status;
	if(waitpid(pid,&pid_status,0)==-1){
		error("error when waiting child process\n");
	}

	return 0;
}

