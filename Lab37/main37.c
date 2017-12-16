/*
 * main37.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct socialRecord{
	char* name;
	char* title;
	char* detail;
	struct socialRecord* nextRecord;
} socialRecord;

socialRecord* createRecord(char* name,char* title,char* detail){
	socialRecord* thisRecord = malloc(sizeof(socialRecord));
	thisRecord->name = name;
	thisRecord->title = title;
	thisRecord->detail = detail;
	thisRecord->nextRecord = NULL;
	return thisRecord;
}

void printAllRecords(socialRecord* aRecord) {
	for(socialRecord* currentRecord = aRecord; currentRecord!=NULL; currentRecord=currentRecord->nextRecord){
		printf("name=%s, title=%s, detail=%s\n",currentRecord->name,currentRecord->title,currentRecord->detail);
	}
}

int main(int argc, char **argv) {
	char name[80] = "mark";
	char title[100] = "title1";
	char detail[200] = "detail1";

	socialRecord* firstRecord = createRecord(name,title,detail);
	printAllRecords(firstRecord);

	strcpy(name,"John");
	strcpy(title,"title2");
	strcpy(detail,"detail2");
	socialRecord* secondRecord = createRecord(name,title,detail);

	printAllRecords(firstRecord);
	printAllRecords(secondRecord);

//	socialRecord firstRecord = {"Mark","first record","some details",NULL};
//	socialRecord secondRecord = {"John","second record","more details",NULL};
//	socialRecord thirdRecord = {"Tim","last record","...",NULL};
//
//	firstRecord.nextRecord = &secondRecord;
//	secondRecord.nextRecord = &thirdRecord;
//
//	printAllRecords(&firstRecord);

	return 0;
}

