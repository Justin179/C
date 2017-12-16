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
void currencyExchange(int originCurrency, float (*exchange)(int)){
	printf("NTD %d--> Yen %.2f\n",originCurrency,exchange(originCurrency));
}
int main(int argc, char **argv) {
	int totalTWD = 1000000;
	// 方法
	float(*pTWDToYen)(int) = TWDToYen;
	// 把方法，以物件型態傳入另一個方法
	currencyExchange(totalTWD,pTWDToYen);
	return 0;
}

