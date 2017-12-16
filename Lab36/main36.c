/*
 * main36.c
 *
 *  Created on: 2017年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
typedef struct options{
	unsigned int autoParking:1; // :1 -> 只佔用一個bit
	unsigned int roundCamera:1;
	unsigned int EAS:1;
	unsigned int HID:1;
	unsigned int smartLink:1;
	unsigned int stableAirCondition:1;
	unsigned int adjustSeat:1;
	unsigned int pm2_5:1;
} options;
typedef union capacity{
	int maxPassenger;
	int maxLiter;
	float maxKilogram;
} capacity;

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
	capacity maxCapacity;
	options currentOptions;
} car;
car mycar = {"my car1",0,2010.0,{2121,800,350},{.maxPassenger=5},{0,0,1,1,0,1,0,0}};
void printDimension(car thiscar){
	printf("thiscar.size.x/y/z = [%d,%d,%d]\n",thiscar.size.x, thiscar.size.y, thiscar.size.z);
}
void printName(car thisCar){
	printf("car name= %s\n",thisCar.name);
}
void addPassenger(car* thiscar){
	thiscar->passenger += 1;
	printf("[Inside] add a passenger in car, now %d\n",thiscar->passenger);
}

int main(int argc, char **argv) {
	printf("size of car instance= %lu\n",sizeof(mycar));
	printf("my car got EAS? %s\n",(mycar.currentOptions.EAS==1? "YES":"NO"));
	printName(mycar);

	car anothercar = {"my car2", 1, 1980.0,{2133,833,333},{.maxLiter=70}};
	printf("anothercar maxLiter= %d\n",anothercar.maxCapacity.maxLiter);
	printf("mycar maxPassenger= %d\n",mycar.maxCapacity.maxPassenger);
	printName(anothercar);
	printDimension(anothercar);
	printDimension(mycar);

	printf("anothercar.passenger= %d\n",anothercar.passenger); // 1
	addPassenger(&anothercar); // 2
	printf("anothercar.passenger= %d\n",anothercar.passenger); // 1

	return 0;
}

