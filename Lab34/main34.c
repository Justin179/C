/*
 * main34.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>

float discountRate = 0.9;
float applyDiscount(int price){
	return (float) price*discountRate;
}
int itemPrices[] = {80,100,300};

int main(int argc, char **argv) {
	int i;
	for(i=0; i<3; i++){
		printf("���=%d --> �馩��=%f\n",itemPrices[i],applyDiscount(itemPrices[i]));
	}
	return 0;
}

