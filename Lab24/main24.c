/*
 * main24.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */

#include <stdio.h>
#include <string.h>

char* haystack = "12345ABCDEFG67890";

void searchFor(char* needle) {
	char* result = strstr(haystack, needle);
	if (result != NULL) {
		// �u�n���ǪF��^�ӴN�Otrue, != NULL�i�ٲ�
		printf("string found, content=%s\n", result); // ABCDEFG67890
	}
}

int main(int argc, char **argv) {
	char* needle = "ABC";
	searchFor(needle);
	return 0;
}

