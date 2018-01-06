/*
 * main63.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	ostream& myout = cout;
	float floatX = 123.45;
	int intY = 100;
	myout << floatX << " ,hello, " << intY << endl;
	myout << intY << " " << -intY << endl;

	myout.unsetf(ios::dec);
	myout.setf(ios::hex | ios::scientific);
	myout << floatX << " ,hello, " << intY << endl;
	myout.setf(ios::uppercase);
	myout << floatX << " ,hello, " << intY << endl;
	//cout << intY << " " << -intY << endl;

	myout.setf(ios::showpos);
	myout << intY << " " << -intY << endl;

	myout.setf(ios::dec | ios::showpoint | ios::fixed);
	myout << intY << " " << -intY << endl;

	myout.unsetf(ios::dec);
	myout.setf(ios::uppercase | ios::showbase | ios::hex);
	myout << 88 << endl;
	myout.unsetf(ios::uppercase);
	myout << 88 << endl;
	return 0;
}


