/*
 * main58.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	const int foo = 5;
	const int &bar = foo;
	int hee = 6;
	int& bird = hee;
	int* pBird = &hee;
	cout << "bird value=" << bird << endl;
	cout << "pBird value=" << *pBird << endl;
	const int* pBar = &foo;
	cout << "bar=" << bar << " ,pBar=" << *pBar << endl;
	//*pBar = 100;

	return 0;
}

