/*
 * main15.c
 *
 *  Created on: 2017�~12��2��
 *      Author: Administrator
 */
#include <stdio.h>
int main(int argc, char **argv) {
	int p = 1;
	float q = 2.3;
	long r = 4;
	double s = 5.6;

	int* pp = &p;
	float* pq = &q;
	long* pr = &r;
	double* ps = &s;

	printf("p,q,r,s size=%lu, %lu, %lu, %lu\n",sizeof(p),sizeof(q),sizeof(r),sizeof(s));
	printf("pp,pq,pr,ps size=%lu, %lu, %lu, %lu\n",sizeof(pp),sizeof(pq),sizeof(pr),sizeof(ps)); // ���� 64�줸 8 8 8 8

	return 0;
}


