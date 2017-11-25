/*
 * main8.c
 *
 *  Created on: 2017¦~11¤ë25¤é
 *      Author: Administrator
 */
#include <stdio.h>

void itoa(int n, char s[]){
	// n -> -5432

	int i;
	int sign;
	if((sign=n)<0){
		n = -n;
	}
	do{
		s[i++] = n%10+'0';
	} while ((n/=10)>0);
	if(sign<0){
		s[i++] = '-';
	}
	s[i] = '\0';
}

int main(int argc, char **argv) {
	char s[80];
	int o = 54321;
	itoa(o,s);
	printf("reverse string=%s\n",s);
	fflush(stdout);

	return 0;
}


