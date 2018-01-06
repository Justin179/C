/*
 * main78.cpp
 *
 *  Created on: 2018年1月6日
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
class myClass{
	static int i;
public:
	void setI(int n){
		i = n;
	}
	int getI(){
		return i;
	}
};

int myClass::i = 2;

int main(int argc, char **argv) {
	myClass o1,o2;
	cout << "o1.i=" << o1.getI() << endl;
	cout << "o2.i=" << o2.getI() << endl;

	o1.setI(10);
	cout << "o1.i=" << o1.getI() << endl;
	cout << "o2.i=" << o2.getI() << endl;
//  undefined reference to `myClass::i' -> 大概是因為class&static是同一級的

	return 0;
}


