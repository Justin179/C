/*
 * main69.cpp
 *
 *  Created on: 2018�~1��6��
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
	friend ostream& operator <<(ostream& stream, coord obj); // �����������F��
	friend istream& operator >>(istream& stream, coord& obj);
};

ostream& operator <<(ostream& stream, coord obj){
	stream << obj.x << ", " << obj.y << endl;
	return stream;
}
istream& operator >>(istream& stream, coord& obj){
	cout << "enter coordinate: ";
	stream >> obj.x >> obj.y;
	return stream;
}


int main(int argc, char **argv) {
	coord a(1,1), b(5,7), c;
	cout << a << b << c << endl;

	cin >> c;
	cout << c;

	return 0;
}


