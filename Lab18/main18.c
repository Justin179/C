/*
 * main18.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {

	int items[] = {3,1,4,1,5,9,2,6,8,37,45};
	printf("the first element is %d,%d\n",items[0],*items); // *items是指 Index 0
	printf("the third element is %d,%d\n",items[2],*(items+2));

	printf("items & *items %d,%d\n",items,*items); // -13440,3

	return 0;
}

