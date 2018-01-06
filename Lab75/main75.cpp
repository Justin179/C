/*
 * main75.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
using std::cout;
using std::cin;

namespace Demo{
	int a;
}
namespace Demo{
	int b;
}
int x;

int main(int argc, char **argv) {
	double value;
	cout<<"enter a number: " << std::endl;
	cin>>value;
	cout<<"this is your number:" << std::endl;
	cout<<value;

	using namespace Demo;
	x = 500;
	a = b = value;
	cout << "x=" << x << " ,a=" << a << " ,b=" << b << std::endl;

	return 0;
}


