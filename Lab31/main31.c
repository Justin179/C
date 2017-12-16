/*
 * main31.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	short shortx = 55;
	int intx = shortx; // short是int一半的值，丟過去沒有問題
	printf("shortx=%d, intx=%d",shortx,intx); //

	int inty = 50000;
	short shorty = inty; // 大的倒到小的 會有overflow的問題，不過若是5000的話，short也裝的下就沒有問題
	printf("\n shorty=%d, inty=%d",shorty,inty); //

	return 0;
}

