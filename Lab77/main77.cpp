/*
 * main77.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
#include <cstring>
using namespace std;

class strtype{
	char str[80];
	unsigned long len;
public:
	strtype(const char* s) {
		strcpy(str, s);
		len = strlen(s);
	}
	operator char*() {
		return str;
	}
};

int main(int argc, char **argv) {
	strtype s1("This is test1\n");
	char *p, s2[80];
	p = s1;
	cout << "get p=" << p << endl;

	strcpy(s2, s1);
	cout << "Here is a copy of string:" << s2 << endl;
	return 0;
}


