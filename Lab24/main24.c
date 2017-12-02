/*
 * main24.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>
#include <string.h>

char* haystack = "12345ABCDEFG67890";

void searchFor(char* needle) {
	char* result = strstr(haystack, needle);
	if (result != NULL) {
		// 只要有傳東西回來就是true, != NULL可省略
		printf("string found, content=%s\n", result); // ABCDEFG67890
	}
}

int main(int argc, char **argv) {
	char* needle = "ABC";
	searchFor(needle);
	return 0;
}

