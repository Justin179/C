/*
 * main68.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	bool b = true;
	cout << "before setting, b=" << b;
	b = false;
	cout << " when b set to false, b=" << b << endl;

	cout << boolalpha;
	b = true;
	cout << "[2].before setting, b=" << b;
	b = false;
	cout << " when b set to false, b=" << b << endl;

	cout << "Enter a boolean bvalue: "<< endl;
	cin >> boolalpha>> b;
	cout << "you entered:" << b << endl;
	return 0;
}


