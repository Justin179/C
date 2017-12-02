/*
 * main30.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv) {

	char ch;
	while((ch=getopt(argc,argv,"i:a:k"))!=EOF){
		switch(ch){
		case 'i':
			printf("parameter i get value:%s\n",optarg);
			break;
		case 'a':
			printf("parameter a get value:%s\n",optarg);
			break;
		case 'k':
			printf("k is checked\n");
			break;
		}
	}

	int i;
	for(i=0;i<argc;i++){
		printf("#%d parameter=%s\n",i,argv[i]);
	}

	return 0;
}

