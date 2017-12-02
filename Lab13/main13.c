/*
 * main.c
 *
 *  Created on: 2017¦~12¤ë2¤é
 *      Author: Administrator
 */
#include <stdio.h>
int foo = 0;
int foo2 = 200;
int foo3 = 10000;
int main(int argc, char **argv) {
	// local,stack
	int bar = 5;
	int bar2 = 50;
	int bar3 = 200000;
	printf("foo, foo2, foo3 address=%p, %p, %p\n",&foo, &foo2, &foo3);
	printf("bar address=%p, %p, %p\n",&bar, &bar2, &bar3);
	return 0;
}


