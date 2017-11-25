/*
 * main6.c
 *
 *  Created on: 2017¦~11¤ë25¤é
 *      Author: Administrator
 */
int main(int argc, char **argv) {
	int x = 5;
	int y = 6;
	int z = 0;
	int n = 7;

	if(n>0)
		z = x;
	else
		z = y;

	printf("%d",z);

	if(n>0)
		if(x>y)
			z = x;
		else
			z = y;
	printf(" %d",z);

}


