/*
 * main37.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>
typedef struct socialRecord{
	char* name;
	char* title;
	char* detail;
	struct socialRecord* nextRecord;
} socialRecord;

void printAllRecords(socialRecord* aRecord) {
	for(socialRecord* currentRecord = aRecord; currentRecord!=NULL; currentRecord=currentRecord->nextRecord){
		printf("name=%s, title=%s, detail=%s\n",currentRecord->name,currentRecord->title,currentRecord->detail);
	}
}

int main(int argc, char **argv) {
	socialRecord firstRecord = {"Mark","first record","some details",NULL};
	socialRecord secondRecord = {"John","second record","more details",NULL};
	socialRecord thirdRecord = {"Tim","last record","...",NULL};

	firstRecord.nextRecord = &secondRecord;
	secondRecord.nextRecord = &thirdRecord;

	printAllRecords(&firstRecord);

	return 0;
}

