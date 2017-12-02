/*
 * main27.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */

#include <stdio.h>
int main(int argc, char **argv) {
	float x,y,z;

	while(scanf("%f,%f,[^\n]",&x,&y)==2){ // 輸入兩個浮點數，且不是換行，就一直反覆執行

		if(x>1000 || y>1000){
			fprintf(stderr,"input larger than 1000, ignore %f,%f\n",x,y);
		} else {
			z = x * y;
			printf("%f*%f=%f\n", x, y, z);
			fflush(stdout);
		}

	}

//	scanf("%f,%f",&x,&y); // 3,6 輸入時，中間用逗點分隔


	return 0;
}

