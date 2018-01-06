/*
 * main70.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;
const char* filename = "test";
int main(int argc, char **argv) {
	ofstream fileOut(filename);
	if(!fileOut){
		cout << "file WRITE can't be created" << endl;
		return 1;
	}
	fileOut << "hello world" << endl;
	for(int i = 0; i<20; i++){
		fileOut << dec << i << ' ' << hex << i << endl;
	}
	fileOut.close();

	// Åª:
	ifstream fileRead(filename);
	if(!fileRead){
		cout << "file READ can't be created " << endl;
		return 1;
	}
	string readLine;
	stringstream stream1;
	int p,q;
	getline(fileRead, readLine);
	cout << "get result=" << readLine << endl;
	for(int i = 0; i<20; i++){
		getline(fileRead,readLine);
		stream1.clear();
		stream1.str(readLine);
		stream1 >> dec >> p >> hex >> q;
		cout << "p=" << p << " ,q=" << q << endl;
	}
	fileRead.close();







	return 0;
}


