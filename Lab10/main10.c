/*
 * main10.c
 *
 *  Created on: 2017年11月25日
 *      Author: Administrator
 */

#include <stdio.h>
#define MAXLINE 1000
char pattern[] = "ould";

int _getline(char s[], int limit);
int strindex(char s[], char t[]);
int main(int argc, char **argv) {

	printf("input something into console:\n");
	fflush(stdout);
	char line[MAXLINE];
	int found = 0;
	while(_getline(line,MAXLINE)>0){
		if(strindex(line,pattern)>0){
			fflush(stdout);
			found++;
		}
		return found;
	}
	return 0;
}

int _getline(char s[], int limit){
	int c, i;
	i=0;
	while(--limit>0 && (c=getchar())!= EOF && c != '\n'  ){
		s[i++] = c;
	}
	if(c=='\n'){
		s[i++]=c;
	}
	s[i]='\0';
	printf("get line count=%d\n",i-2); // 不算結尾與換行
	fflush(stdout);
	return i;
}

int strindex(char s[], char t[]){
	int i,j,k;
	for(i=0; s[i]!='\0';i++){
		fflush(stdout);
		for(j=i, k=0;t[k]!='\0'&&s[j]==t[k];j++,k++){

		}
		if(k>0 && t[k]=='\0'){
			printf("found key at %d\n",i);
			return i;
		}
	}
	return -1;
}





