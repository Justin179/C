/*
 * main16.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */
#include <stdio.h>
void displayMessage(char message[]){
	printf("inside message size=%lu\n",sizeof(message)); // 因為傳入的東西如果是陣列，就只是傳入一個指標，所以大小都是8(每一個參考的size都是一樣的)
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


