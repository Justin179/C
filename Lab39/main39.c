/*
 * main39.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct asset {
	char* name;
	int twd;
	int usd;
} asset;
asset John = {"John",100,100};
asset Mark = {"Mark",80,100};
asset Tim = {"Tim",100,80};
asset Mary = {"Mary",80,80};
int compareAsset(const void* assetA, const void* assetB){
	asset* compare1 = (asset*) assetA;
	asset* compare2 = (asset*) assetB;

	int x = compare1->twd;
	int y = compare1->usd;
	int z = x+30*y;

	int x2 = compare2->twd;
	int y2 = compare2->usd;
	int z2 = x2+30*y2;

	return z - z2;
}
int main(int argc, char **argv) {
	asset members[] = {John,Mark,Tim,Mary};
	qsort(members,4,sizeof(asset),compareAsset); // 排序
	printf("ranking orders:\n");
	for(int i = 0; i<4; i++){
		printf("%s, %d, %d \n",members[i].name,members[i].twd,members[i].usd);
	}
	return 0;
}

