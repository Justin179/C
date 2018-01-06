/*
 * main56.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	// int pointer point to int
	int x = 50, *px = &x;
	void *voidX = &x;
	int y = 60, *py = NULL;
	//cout << "y=" << *py << endl;
	if (voidX == px) {
		py = &x;
	} else {
		py = &y;
	}
	cout << "y=" << *py << endl;
	return 0;
}


