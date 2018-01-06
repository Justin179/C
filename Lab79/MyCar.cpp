/*
 * MyCar.cpp
 *
 *  Created on: 2018年1月6日
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
foo--; // 這裡可以改，是因為有特別宣告成mutable
	return magicNumber;
}

