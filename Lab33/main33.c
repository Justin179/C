/*
 * main33.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(int argc, char **argv) {
	printf("char size = %lu\n",sizeof(char));
	printf("short size = %lu\n",sizeof(short));
	printf("int size = %lu\n",sizeof(int));
	printf("long size = %lu\n",sizeof(long));

	printf("\nlong long size = %lu\n",sizeof(long long));
	printf("float size = %lu\n",sizeof(float));
	printf("double size = %lu\n",sizeof(double));

	printf("\nchar max is %i, min is %i \n",CHAR_MAX, CHAR_MIN);
	printf("SHRT_MAX is %i, SHRT_MIN is %i \n",SHRT_MAX, SHRT_MIN);
	printf("INT_MAX is %i, INT_MIN is %i \n",INT_MAX, INT_MIN);
	printf("LONG_MAX is %li, LONG_MIN is %li \n",LONG_MAX, LONG_MIN);
	printf("FLT_MAX is %f, FLT_MIN is %f \n",FLT_MAX, FLT_MIN);
	printf("DBL_MAX is %f, DBL_MIN is %f \n",DBL_MAX, DBL_MIN);


	return 0;
}

