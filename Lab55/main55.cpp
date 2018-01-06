/*
 * main55.cpp
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	int* p1 = 0;
	if (!p1) {
		cout << "p1 is a null pointer" << endl;
	}
	int* p2 = NULL;
	if (p2 == NULL) {
		cout << "p2 is a null pointer" << endl;
	}
	int* p3 = nullptr;
	if (!(p3 != NULL)) {
		cout << "p3 is a null pointer" << endl;
	}
	return 0;
}


