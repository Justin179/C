/*
 * main53.cpp
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int i1 = 500;
	int i2 = 600;
	int &ri = i1;
	int &ri2 = i2;
	cout << "i1=" << i1 << ",i2=" <<i2<<",&ri1="<<ri<<",&ri2="<<ri2<< endl;

	int i3 = 512;
	int &ri3 = i3;
	cout << "i3=" << i3 << ", ri3=" << ri3 << endl;
	i3 = 1024;
	cout << "i3=" << i3 << ", ri3=" << ri3 << endl;
	ri3 = 2048;
	cout << "i3=" << i3 << ", ri3=" << ri3 << endl;

	double pi = 3.14159;
	double &ri4 = pi;
	cout << ri4 << endl;

	return 0;
}


