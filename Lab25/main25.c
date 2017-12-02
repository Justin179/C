/*
 * main25.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <string.h>

void printreverse(char* origin){
	size_t length = strlen(origin);
	char* charToPrint = origin + length -1;
	while(charToPrint>=origin){
		printf("%c",*(charToPrint--));
//		charToPrint--;
	}
	printf("\n");
}

int main(int argc, char **argv) {
	char* origin = "abcde12345";
	printreverse(origin);
	return 0;
}

