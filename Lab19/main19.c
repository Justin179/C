/*
 * main19.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */
#include <stdio.h>

void skipHeader(char* message){
	printf("[SKIP]:%s\n",message+4);
}

int main(int argc, char **argv) {
	char* message = "TODO: Try this..."; // ����: char message[]
	skipHeader(message);
	return 0;
}


