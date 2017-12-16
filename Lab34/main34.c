/*
 * main34.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
#include "discount.h"
// 這個區塊的位置，必須要在main上面，否則會出錯
float discountRate = 0.9;
int itemPrices[] = {80,100,300};


int main(int argc, char **argv) {
	int i;
	for(i=0; i<3; i++){
		printf("原價=%d --> 折扣價=%f\n",itemPrices[i],applyDiscount(itemPrices[i]));
	}
	return 0;
}

float applyDiscount(int price){
	return (float) price*discountRate;
}
