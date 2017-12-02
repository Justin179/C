/*
 * main20.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>

int main(int argc, char **argv) {
	int intItems[] = { 0, 1, 2 }; // 跳4
	float floatItems[] = { 3.0, 4.0, 5.0 }; // 跳4
	double doubleItems[] = { 6.0, 7.0, 8.0 }; // 跳8
	long longItems[] = {9,10,11}; // 長整數  跳8

	printf("int 1st:%p, 2nd:%p\n",intItems,intItems+1);
	printf("float 1st:%p, 2nd:%p\n",floatItems,floatItems+1);
	printf("double 1st:%p, 2nd:%p\n",doubleItems,doubleItems+1);
	printf("long 1st:%p, 2nd:%p\n",longItems,longItems+1);

	return 0;
}

