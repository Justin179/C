/*
 * main29.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	int i;
	for(i=0;i<argc;i++){
		printf("#%d parameter is %s\n",i,argv[i]);
	}
	return 0;
}

