/*
 * main22.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
//	char* items = "ABC"; -> �i�H�۵o�ʪ��ŧi�� const char* items = "ABC"; �o�˽sĶ�ɴ��N�|����
//	char temp = items[0];
//	items[0] = items[1]; // �o�@��h��`�ơA�ҥH�o�ͨҥ~���~

	// �����ѷ����q p162

	// ��k:
	char items[] = "ABC"; // �ΰ}�C���A�F���٬O�b�`�Ʀ��A���|���ƥ��A�ҥH�~�i�H��
	char temp = items[0];
	items[0] = items[1];
	items[1] = items[2];
	items[2] = temp;
	printf("result=%s\n",items);

	return 0;
}

