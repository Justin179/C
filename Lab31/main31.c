/*
 * main31.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	short shortx = 55;
	int intx = shortx; // short�Oint�@�b���ȡA��L�h�S�����D
	printf("shortx=%d, intx=%d",shortx,intx); //

	int inty = 50000;
	short shorty = inty; // �j���˨�p�� �|��overflow�����D�A���L�Y�O5000���ܡAshort�]�˪��U�N�S�����D
	printf("\n shorty=%d, inty=%d",shorty,inty); //

	return 0;
}

