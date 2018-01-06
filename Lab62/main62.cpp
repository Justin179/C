/*
 * main62.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	float floatX = 123.45;
	int intY = 100;
	cout << floatX << " ,hello, " << intY << endl;
	cout << intY << " " << -intY << endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex|ios::scientific);
	cout << floatX << " ,hello, " << intY << endl;
	//cout << intY << " " << -intY << endl;

	cout.setf(ios::showpos);
	cout << intY << " " << -intY << endl;

	cout.setf(ios::dec|ios::showpoint|ios::fixed);
	cout << intY << " " << -intY << endl;
	return 0;
}



