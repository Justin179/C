/*
 * main21.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */
#include <stdio.h>
int main(int argc, char **argv) {
	char username[5]; // �i�H��30�Ӧr��
	int age;

	printf("input username: ");
	fflush(stdout); // ���L�X��
	scanf("%4s",username); // 29�O�]���̫᪺slash0�]�|���@�r��; &username �w�n��(�O�����m)�]�O�i�H

	printf("input age: ");
	fflush(stdout);
	scanf("%d",&age); // �]���O�i�h�@�Ӥ�k���A�ҥH�n�ǰO�����m�i�h�A���M���|�v�T��ŧi�b�~��int

	printf("%s is %d years old\n",username,age);

	return 0;
}


