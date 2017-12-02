/*
 * main23.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	char string1[] = "Hello";
	char* pString = string1;
	printf("string content=%s, pointer content=%s\n",string1,pString);

	*pString = 'W';
	*(string1+1) = 'o';
	*(pString+2) = 'r';
	*(string1+3) = 'l';
	*(pString+4) = 'd';
	// 兩個變數指向同一個記憶體位置
	printf("string content=%s, pointer content=%s\n",string1,pString);

	return 0;
}

