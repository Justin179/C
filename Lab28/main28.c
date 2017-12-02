/*
 * main28.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	float x, y;
	while(scanf("%f,%f,[^\n]",&x,&y)==2){
		printf("%f,%f\n",x*x,y*y);
		fflush(stdout);
	}
	return 0;
}

