/*
 * main36.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include <stdio.h>
struct dimension{
	int x;
	int y;
	int z;
};
struct car {
	const char* name;
	int passenger;
	float weight;
	struct dimension size;
};
struct car mycar = {"my car1",0,2010.0,{2121,800,350}};
void printDimension(struct car thiscar){
	printf("thiscar.size.x/y/z = [%d,%d,%d]\n",thiscar.size.x, thiscar.size.y, thiscar.size.z);
}
void printName(struct car thisCar){
	printf("car name= %s\n",thisCar.name);
}
int main(int argc, char **argv) {
	printf("size of car instance= %lu\n",sizeof(mycar));

	printName(mycar);

	struct car anothercar = {"my car2", 1, 1980.0,{2133,833,333}};
	printName(anothercar);
	printDimension(anothercar);
	printDimension(mycar);

	return 0;
}

