/*
 * main54.cpp
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int i = 300;
	int* pi = &i;
	cout << "i=" << i << ",pi=" << *pi << endl;

	*pi = 450;
	cout << "i=" << i << ",pi=" << *pi << endl;


	int i2 = 1234;
	int* pi2;
	pi2 = &i2;
	cout << "i2=" << i2 << ",pi2=" << *pi2 << endl;

	return 0;
}


