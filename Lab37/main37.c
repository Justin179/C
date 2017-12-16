/*
 * main37.c
 *
 *  Created on: 2017年12月16日
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
	thisRecord->name = strdup(name); // 產一個有不同記憶體位置的複本
	thisRecord->title = strdup(title); // 產一個有不同記憶體位置的複本
	thisRecord->detail = strdup(detail); // 產一個有不同記憶體位置的複本
	thisRecord->nextRecord = NULL;
	return thisRecord;
}

void printAllRecords(socialRecord* aRecord) {
	for(socialRecord* currentRecord = aRecord; currentRecord!=NULL; currentRecord=currentRecord->nextRecord){
		printf("name=%s, title=%s, detail=%s\n",currentRecord->name,currentRecord->title,currentRecord->detail);
	}
}

void release(){

}

int main(int argc, char **argv) {
	char name[80] = "mark";
	char title[100] = "title1";
	char detail[200] = "detail1";

	// 產一個物件
	socialRecord* firstRecord = createRecord(name,title,detail);
	// 只有一個物件，印出一筆
	printAllRecords(firstRecord);

	// 這三行是在同一個記憶體位置填入不同的值
	strcpy(name,"John"); // 蓋上面的mark
	strcpy(title,"title2"); // 同上
	strcpy(detail,"detail2"); // 同上

	// 產另一個物件
	socialRecord* secondRecord = createRecord(name,title,detail);

	// 串連兩個物件
	firstRecord->nextRecord = secondRecord;

	// 有兩個串連起來的物件，印出兩筆
	printAllRecords(firstRecord);


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

