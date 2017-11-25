/*
 * main12.c
 *
 *  Created on: 2017¦~11¤ë25¤é
 *      Author: Administrator
 */
#include <stdio.h>
void printd(int n){
	if(n<0){
		putchar('-');
		n=-n;
	}
	if(n/10>0){
		printd(n/10);
	}
	putchar(n%10+'0');
	fflush(stdout);
}
int main(int argc, char **argv) {
	int x = 123456;
	printd(x);
	return 0;
}


