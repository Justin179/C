/*
 * main76.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class Coord{
	int px, py;
public:
	Coord(int x, int y ){
		px = x;
		py = y;
	}
	operator int(){
		return px * py;
	}
	operator double (){
		return (double) px / (double) py;
	}
};

int main(int argc, char **argv) {

	Coord cd1(4,8), cd2(8,3);

	int i,j;
	double k,l;
	i = cd1; // 32
	j = cd2; // 24
	k = cd1; // 0.5
	l = cd2; // 2.66667

	cout << "i=" << i << ",j=" << j << endl;
	cout << "k=" << k << ",l=" << l << endl;

	return 0;
}


