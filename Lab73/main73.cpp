/*
 * main73.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include "main73.h"
using namespace std;
int main(int argc, char **argv) {
	MyNameSpace::globalI = 100;
	MyNameSpace::myFunc(98765);
	MyNameSpace::MyClass myClass;
	cout << "globalI=" << myClass.getGlobalI() << endl;
	return 0;
}


