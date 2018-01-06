/*
 * main72.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main(int argc, char **argv) {
	char ch;
	ofstream out("test",ios::out);
	if(!out){
		cout << "can not open file" << endl;
		return 1;
	}
	cout << "enter $ to stop" << endl;
	do{
		cin.get(ch);
		out.put(ch);
	}while(ch!='$');
	return 0;
}


