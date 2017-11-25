/*
 * main9.c
 *
 *  Created on: 2017年11月25日
 *      Author: Administrator
 */
#include <stdio.h>
#include <string.h>
int trim(char s[]){
	int n = 0;
	// strlen():回傳字串的長度
	for(n=strlen(s)-1;n>=0;n--){
		if( !(s[n]==' ' || s[n]=='\t' || s[n]=='\n') ){
//		if(s[n]!=' ' && s[n]!='\t' && s[n]!='\n'){
			break;
		}
	}
	s[n+1]='\0';
	printf("after shrinking, string=%s\n",s);
	return n+1;
}

int main(int argc, char **argv) {
	char string1[] = "hello world       ";
	char string2[] = "hello      world";
	char string3[] = "hello    \t\t\t\n\n\n  ";

	int trimSize = trim(string1);
	int trimSize2 = trim(string2);
	int trimSize3 = trim(string3);

	printf("string1 real size=%d\n", trimSize);
	printf("string2 real size=%d\n", trimSize2);
	printf("string3 real size=%d\n", trimSize3);
	return 0;
}


