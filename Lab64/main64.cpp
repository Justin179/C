/*
 * main64.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
void showFlags() {
	ios::fmtflags flags = cout.flags();
	if (flags & ios::oct) {
		cout << "oct is ON" << endl;
	} else {
		cout << "oct is OFF" << endl;
	}
	if (flags & ios::showbase) {
		cout << "showbase is ON" << endl;
	} else {
		cout << "showbase is OFF" << endl;
	}
	if (flags & ios::dec) {
		cout << "decimal is ON" << endl;
	} else {
		cout << "decimal is OFF" << endl;
	}
}

int main(int argc, char **argv) {
	showFlags();
	cout << "Original:" << 376 << endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::oct|ios::showbase|ios::fixed);
	showFlags();
	cout << "Original:" << 376 << endl;
	return 0;
}


