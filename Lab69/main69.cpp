/*
 * main69.cpp
 *
 *  Created on: 2018年1月6日
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class coord {
	int x,y;
public:
	coord(){
		x = 0;
		y = 0;
	}
	coord(int i, int j){
		x = i;
		y = j;
	}
	friend ostream& operator <<(ostream& stream, coord obj); // 類似介面的東西
};

ostream& operator <<(ostream& stream, coord obj){
	stream << obj.x << ", " << obj.y << endl;
	return stream;
}



int main(int argc, char **argv) {

	coord a(1,1), b(5,7), c;
	cout << a << b << c << endl;

	return 0;
}



