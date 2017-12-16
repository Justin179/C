/*
 * main37.c
 *
 *  Created on: 2017�~12��16��
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
	thisRecord->name = strdup(name); // ���@�Ӧ����P�O�����m���ƥ�
	thisRecord->title = strdup(title); // ���@�Ӧ����P�O�����m���ƥ�
	thisRecord->detail = strdup(detail); // ���@�Ӧ����P�O�����m���ƥ�
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

	// ���@�Ӫ���
	socialRecord* firstRecord = createRecord(name,title,detail);
	// �u���@�Ӫ���A�L�X�@��
	printAllRecords(firstRecord);

	// �o�T��O�b�P�@�ӰO�����m��J���P����
	strcpy(name,"John"); // �\�W����mark
	strcpy(title,"title2"); // �P�W
	strcpy(detail,"detail2"); // �P�W

	// ���t�@�Ӫ���
	socialRecord* secondRecord = createRecord(name,title,detail);

	// ��s��Ӫ���
	firstRecord->nextRecord = secondRecord;

	// ����Ӧ�s�_�Ӫ�����A�L�X�ⵧ
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

