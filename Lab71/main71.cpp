/*
 * main71.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char **argv) {

	char ch;

	ifstream inputFile("test", ios::in | ios::binary);
	if (!inputFile) {
		cout << "file not found" << endl;
		return 1;
	}

	while (!inputFile.eof()) {
		inputFile.get(ch);
		cout << ch;
	}
	inputFile.close();

	return 0;
}

