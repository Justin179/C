/*
 * main17.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */
#include <stdio.h>

changeMessage(char** message){
	*message = "Change to something...";
}

int main(int argc, char **argv) {
	char message1[] = "Hello World"; // 陣列
	char* message1p = message1; // 接進來變參考

	changeMessage(&message1p); // 把 參考.參考 傳進去(要用**去接)，進行修改

	printf("message1p now has value = %s\n",message1p);

	return 0;
}


