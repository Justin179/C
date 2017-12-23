/*
 * main50.cpp
 *
 *  Created on: 2017¦~12¤ë23¤é
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int x = 1;
	for(int i = 0; i<20; i++){
		cout << "[" << i << "]:x=" << x << endl;
		x = x << 1;
	}
	return 0;
}


