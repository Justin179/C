/*
 * MyCar.cpp
 *
 *  Created on: 2018�~1��6��
 *      Author: Administrator
 */

#include "MyCar.h"
int MyCar::counter = 0;
//int MyCar::magicNumber = 1234567;
MyCar::MyCar() {
	counter++;
	foo = 0;
}

MyCar::~MyCar() {
	// TODO Auto-generated destructor stub
}

void MyCar::setCounter(int x){
	counter = x;
}
 int MyCar::getCounter(void){
	return counter;
}
void MyCar::resetCounter(void){
	counter = 0;
}

int MyCar::getMagic() const{
foo--; // �o�̥i�H��A�O�]�����S�O�ŧi��mutable
	return magicNumber;
}

