/*
 * main35.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
#include "leftAlarm.h"
#include "rightAlarm.h" // ���ŧi�A�ѨM���ǩʪ����D(�񨺸̳��i�H)
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

