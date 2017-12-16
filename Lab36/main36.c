/*
 * main36.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include <stdio.h>
typedef struct dimension{
	int x;
	int y;
	int z;
} carDimension;
typedef struct car {
	const char* name;
	int passenger;
	float weight;
	carDimension size;
} car;
car mycar = {"my car1",0,2010.0,{2121,800,350}};
void printDimension(car thiscar){
	printf("thiscar.size.x/y/z = [%d,%d,%d]\n",thiscar.size.x, thiscar.size.y, thiscar.size.z);
}
void printName(car thisCar){
	printf("car name= %s\n",thisCar.name);
}
void addPassenger(car* thiscar){
	(*thiscar).passenger += 1;
	printf("[Inside] add a passenger in car, now %d\n",(*thiscar).passenger);
}

int main(int argc, char **argv) {
	printf("size of car instance= %lu\n",sizeof(mycar));

	printName(mycar);

	car anothercar = {"my car2", 1, 1980.0,{2133,833,333}};
	printName(anothercar);
	printDimension(anothercar);
	printDimension(mycar);

	printf("anothercar.passenger= %d\n",anothercar.passenger); // 1
	addPassenger(&anothercar); // 2
	printf("anothercar.passenger= %d\n",anothercar.passenger); // 1

	return 0;
}

