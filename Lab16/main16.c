/*
 * main16.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */
#include <stdio.h>
void displayMessage(char message[]){
	printf("inside message size=%lu\n",sizeof(message)); // �]���ǤJ���F��p�G�O�}�C�A�N�u�O�ǤJ�@�ӫ��СA�ҥH�j�p���O8(�C�@�ӰѦҪ�size���O�@�˪�)
	printf("[display]:%s\n", message);
}
int main(int argc, char **argv) {
	char message1[] = "Hello World";
	printf("message1 size=%lu\n",sizeof(message1));
	displayMessage(message1);

	char message2[] = "Hello Natalie";
	printf("message2 size=%lu\n",sizeof(message2));
	displayMessage(message2);

	char* message1p = message1;
	printf("size of message1, message1p: %lu, %lu\n",sizeof(message1), sizeof(message1p)); // 12, 8

	printf("address of message1 %p\n",message1); // 0xffffcb9c
	printf("address of message1p %p\n",message1p); // 0xffffcb9c

	printf("address of &message1 %p\n",&message1); //
	printf("address of &message1p %p\n",&message1p); //


	return 0;
}


