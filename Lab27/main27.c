/*
 * main27.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	float x,y,z;

	while(scanf("%f,%f,[^\n]",&x,&y)==2){ // ��J��ӯB�I�ơA�B���O����A�N�@�����а���

		if(x>1000 || y>1000){
			fprintf(stderr,"input larger than 1000, ignore %f,%f\n",x,y);
		} else {
			z = x * y;
			printf("%f*%f=%f\n", x, y, z);
			fflush(stdout);
		}

	}

//	scanf("%f,%f",&x,&y); // 3,6 ��J�ɡA�����γr�I���j


	return 0;
}

