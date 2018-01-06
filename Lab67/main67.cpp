/*
 * main67.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void displayTable(int precision) {
	for (int x = 2; x < 20; x++) {

		// cout.width(precision + 2);
		cout << setw(precision+2) << x << " ";

//		cout << x << " ";

		//cout.setf(ios::left);
		//cout.width(precision + 2);
		cout << fixed << left << setw(precision+2);

		cout << sqrt((double) (x)) << " ";

//		cout.width(precision + 2);
//		cout << (int) (pow(x, 2));
		cout << setw(precision+2) << (int) (pow(x, 2));

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


