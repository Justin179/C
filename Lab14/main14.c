/*
 * main14.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <stdio.h>
void moveSouthWest(int* px, int* py){
	*px = *px - 1;
	*py = *py - 1;
}

void moveSouthEast(int* px, int* py){
	(*px)++;
	(*py)--;
}

int main(int argc, char **argv) {
	int locationX = 0;
	int locationY = 0;

	moveSouthWest(&locationX,&locationY);
	moveSouthEast(&locationX,&locationY);
	printf("new address=(%d,%d)",locationX,locationY);
	return 0;
}

