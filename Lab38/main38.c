/*
 * main38.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
// 方法
float TWDToYen(int originCurrency){
	return (float) originCurrency * 3.1;
}
float TWDToUSD(int originCurrency){
	return (float) originCurrency * 0.31;
}
void currencyExchange(int originCurrency, float (*exchange)(int)){
	printf("NTD %d--> other currency %.2f\n",originCurrency,exchange(originCurrency));
}
int main(int argc, char **argv) {
	int totalTWD = 1000000;
	// 方法
	float(*pExchange[])(int) = {TWDToYen,TWDToUSD};
	// 把方法，以物件型態傳入另一個方法
	for(int i=0; i<2; i++){
		currencyExchange(totalTWD,pExchange[i]);
	}
	return 0;
}

