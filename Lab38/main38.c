/*
 * main38.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
// ��k
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
	// ��k
	float(*pExchange[])(int) = {TWDToYen,TWDToUSD};
	// ���k�A�H���󫬺A�ǤJ�t�@�Ӥ�k
	for(int i=0; i<2; i++){
		currencyExchange(totalTWD,pExchange[i]);
	}
	return 0;
}

