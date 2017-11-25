/*
 * main11.c
 *
 *  Created on: 2017¦~11¤ë25¤é
 *      Author: Administrator
 */

#include <stdio.h>
void showVariable(){
	int i=0;
	static int j =0;
	printf("i=%d,j=%d\n",i++,j++);
}
int main(int argc, char **argv) {
	for(int i=0; i<10; i++){
		showVariable();
	}
	return 0;
}

