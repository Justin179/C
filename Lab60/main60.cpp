/*
 * main60.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	int i = 0;
	int const* pi1 = &i;
	const int* pi2 = &i;
	cout << "i=" << i << " ,pi1=" << *pi1 << " , pi2=" << *pi2 << endl;
	i = 1;
	cout << "i=" << i << " ,pi1=" << *pi1 << " , pi2=" << *pi2 << endl;
	int j = 100;
	pi1 = &j;
	pi2 = &j;
	//*pi1 = 5;
	//*pi2 = 5;
	cout << "i=" << i << " ,pi1=" << *pi1 << " , pi2=" << *pi2 << endl;
	const int m = 70;
	const int* pi3 = &m;
	int const* pi4 = &m;
	cout << "m=" << m << " , pi3=" << *pi3 << " , pi4=" << *pi4 << endl;
	return 0;
}


