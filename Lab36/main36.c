/*
 * main36.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>

struct car {
	const char* name;
	int passenger;
	float weight;
};

struct car mycar = {"my car1",0,2010.0};
void printName(struct car thisCar){
	printf("car name= %s\n",thisCar.name);
}
int main(int argc, char **argv) {
	printName(mycar);

	struct car anothercar = {"my car2", 1, 1980.0};
	printName(anothercar);
	return 0;
}

