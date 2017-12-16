/*
 * main32.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {

	int x = 13;
	int y = 4;

	float z = 13/4;
	printf("13/4= %f\n",z);

	float z1 = (float)13/(float)4;
	printf("(float)13/(float)4= %f\n",z1);

	float z2 = (float)13/4;
	printf("(float)13/4= %f\n",z2);

	float z3 = 13/(float)4;
	printf("13/(float)4= %f\n",z3);

	return 0;
}

