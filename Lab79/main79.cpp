/*
 * main79.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include "MyCar.h"
using namespace std;
int main(int argc, char **argv) {
	cout << "before construct, magic number: " << MyCar::magicNumber << endl;

	MyCar car1;
	cout << "counter=" << MyCar::getCounter() << endl;
	MyCar car2;
	cout << "counter=" << car2.getCounter() << endl;
	cout << "counter=" << car2.getCounter() << endl;

	cout << car1.getMagic() << endl;
	return 0;
}


