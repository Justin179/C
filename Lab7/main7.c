/*
 * main7.c
 *
 *  Created on: 2017�~11��25��
 *      Author: Administrator
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble(char* item, int count){
	register int a,b;
	register char t;
	for(a=1; a<count; ++a){
		for(b = count-1; b>=a; --b){
			// �j���ܴN�洫, �_�h���������
			if(item[b-1]>item[b]){
				t = item[b-1];
				item[b-1] = item[b];
				item[b] = t;
			}
		}
		printf("#%d==>%s\n",a,item);
		fflush(stdout);
		/*
		 * #1==>
			jfksjfksjakfjak
		 */
	}
}

int main(int argc, char **argv) {
	char s[80];
	printf("enter a string:");
	fflush(stdout);
	gets(s);
	bubble(s,strlen(s));
	printf("sorted is: %s\n",s);
	return 0;
}



