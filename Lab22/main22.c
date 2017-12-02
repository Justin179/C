/*
 * main22.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
//	char* items = "ABC"; -> 可以自發性的宣告成 const char* items = "ABC"; 這樣編譯時期就會報錯
//	char temp = items[0];
//	items[0] = items[1]; // 這一行去改常數，所以發生例外錯誤

	// 說明參照講義 p162

	// 改法:
	char items[] = "ABC"; // 用陣列接，東西還是在常數池，但會有複本，所以才可以改
	char temp = items[0];
	items[0] = items[1];
	items[1] = items[2];
	items[2] = temp;
	printf("result=%s\n",items);

	return 0;
}

