/*
 * main35.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
#include "leftAlarm.h"
#include "rightAlarm.h" // 先宣告，解決順序性的問題(放那裡都可以)
void doLeftAlarm(int isInitial){
	printf("left alarm called \n");
}
void doRightAlarm(int isInitial){
	printf("right alarm called \n");
	if(isInitial){
		doLeftAlarm(0);
	}
}

int main(int argc, char **argv) {
	printf("call Left, then Right");
	doLeftAlarm(1);
	doRightAlarm(1);

	return 0;
}

