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
void currencyExchange(int originCurrency, float (*exchange)(int)){
	printf("NTD %d--> Yen %.2f\n",originCurrency,exchange(originCurrency));
}
int main(int argc, char **argv) {
	int totalTWD = 1000000;
	// ��k
	float(*pTWDToYen)(int) = TWDToYen;
	// ���k�A�H���󫬺A�ǤJ�t�@�Ӥ�k
	currencyExchange(totalTWD,pTWDToYen);
	return 0;
}

