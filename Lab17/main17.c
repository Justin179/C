/*
 * main17.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */
#include <stdio.h>

changeMessage(char** message){
	*message = "Change to something...";
}

int main(int argc, char **argv) {
	char message1[] = "Hello World"; // �}�C
	char* message1p = message1; // ���i���ܰѦ�

	changeMessage(&message1p); // �� �Ѧ�.�Ѧ� �Ƕi�h(�n��**�h��)�A�i��ק�

	printf("message1p now has value = %s\n",message1p);

	return 0;
}


