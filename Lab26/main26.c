/*
 * main26.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <string.h>
//char items[][40] = {
char *items[] = {
		"Hello World",
		"C programming language",
		"C++ programming language"
};

void printReverse(char* origin){
	size_t length = strlen(origin);
	char* charToPrint = origin + length -1;
	while(charToPrint>=origin){
		printf("%c",*(charToPrint--));
//		charToPrint--;
	}
	printf("\n");
}

int main(int argc, char **argv) {
	int i;
	for(i=0; i<3; i++){
		printReverse(items[i]);
	}
	return 0;
}

