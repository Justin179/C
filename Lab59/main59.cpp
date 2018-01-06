/*
 * main59.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	const double foo = 1.55;
	//double* pFoo = &foo;
	const double* cpFoo = &foo;
	cout << "foo=" << foo << " ,cpFoo value=" << *cpFoo << endl;
	double bar = 1.65;
	double* pBar = &bar;
	cout << "bar=" << bar << " ,pBar=" << *pBar << endl;
	*pBar = 1.75;
	cout << "bar=" << bar << " ,pBar=" << *pBar << endl;
	const double* cpBar = &bar;
	cout << "cpBar=" << *cpBar << endl;
	//*cpBar = 1.85;
	cpBar = &foo;
	cout << ", now cpBar=" << *cpBar << endl;

	return 0;
}


