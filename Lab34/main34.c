/*
 * main34.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
#include "discount.h"
// �o�Ӱ϶�����m�A�����n�bmain�W���A�_�h�|�X��
float discountRate = 0.9;
int itemPrices[] = {80,100,300};


int main(int argc, char **argv) {
	int i;
	for(i=0; i<3; i++){
		printf("���=%d --> �馩��=%f\n",itemPrices[i],applyDiscount(itemPrices[i]));
	}
	return 0;
}

float applyDiscount(int price){
	return (float) price*discountRate;
}
