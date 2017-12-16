/*
 * main39.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>

// class
typedef struct asset {
	char* name;
	int twd;
	int usd;
} asset;
// four objs
asset John = {"John",100,100};
asset Mark = {"Mark",80,100};
asset Tim = {"Tim",100,80};
asset Mary = {"Mary",80,80};
// ��@�����k
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
	// ��4�Ӫ�����@�Ӯe��
	asset members[] = {John,Mark,Tim,Mary}; // �N�Q�ƧǪ�����
	// void *array, size_t count, size_t size, comparison_fn_t compare
	qsort(members,4,sizeof(asset),compareAsset); // �Ƨ�
	printf("ranking orders:\n");
	for(int i = 0; i<4; i++){
		printf("%s, %d, %d \n",members[i].name,members[i].twd,members[i].usd);
	}
	return 0;
}

