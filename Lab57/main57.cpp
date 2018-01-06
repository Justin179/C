/*
 * main57.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	const int foo = 5;
	const int &bar = foo;
	cout << "foo=" << foo << " ,bar=" << bar << endl;
	//foo = 6;
	int qoo = 6;
	int& car = qoo;
	cout <<"qoo=" << qoo << " ,car=" << car << endl;
	qoo=7;
	cout <<"qoo=" << qoo << " ,car=" << car << endl;
	car=8;
	cout <<"qoo=" << qoo << " ,car=" << car << endl;
	//int& x1 = foo;
	//cout << "x1=" << x1 << endl;
	const int& y1 = qoo;
	cout << "y1=" << y1 <<endl;
	//y1 = 9;
	return 0;
}


