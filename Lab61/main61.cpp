/*
 * main61.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
#include <string>
using namespace std;
int main(int argc, char **argv) {
	auto i = 0, &ri = i;
	cout << "i=" << i << ", ri=" << ri << endl;
	auto *pi = &i;
	cout << "i=" << i << ", ri=" << ri << ", pi=" << *pi << endl;
	ri = 2;
	cout << "i=" << i << ", ri=" << ri << ", pi=" << *pi << endl;
	*pi = 5;
	cout << "i=" << i << ", ri=" << ri << ", pi=" << *pi << endl;
	cout << "size of i=" << sizeof(i) << " ,size of ri=" << sizeof(ri)
			<< " ,sizeof pi=" << sizeof(pi) << endl;
	return 0;
}


