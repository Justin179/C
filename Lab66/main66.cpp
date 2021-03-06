/*
 * main66.cpp
 *
 *  Created on: 2018�~1��6��
 *      Author: Administrator
 */

#include<iostream>
#include <cmath>
using namespace std;

void displayTable(int precision) {
	for (int x = 2; x < 20; x++) {
		cout.width(precision + 2);
		cout << x << " ";
		cout << fixed;
		cout.setf(ios::left);
		cout.width(precision + 2);
		cout << sqrt((double) (x)) << " ";
		cout.width(precision + 2);
		cout << (int) (pow(x, 2));
		cout << endl;
	}
}

int main(int argc, char **argv) {
	int precision;
	cout << "input precision:(default 4)" << endl;
	cin >> precision;
	cout.precision(precision);
	cout << "begin print x/srqt(x)/x^2 with precision:" << precision << endl;
	displayTable(precision);
	return 0;
}


