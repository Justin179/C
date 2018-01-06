/*
 * main65.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	cout.width(3);
	cout << "Hello" << endl;
	cout.width(10);
	cout << "Hello" << endl;

	cout.fill('.');
	cout.width(15);
	cout << "Hello" << endl;
	cout.fill('*');
	cout.width(10);
	cout << "Hello" << endl;

	cout.setf(ios::left);
	cout.width(10);
	cout << "Hello" << endl;

	return 0;
}


