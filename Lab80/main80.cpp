/*
 * main80.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include <iostream>
#include "Sample.h"
using namespace std;
int main(int argc, char **argv) {
	Sample samples[5];
	for(Sample sample: samples){
		cout << "sample=" << sample.getFoo() << endl;
	}

	for(int i = 0; i<5; i++){
		samples[i].setFoo(i+50);
	}

	for(Sample sample: samples){
		cout << "sample=" << sample.getFoo() << endl;
	}

	return 0;
}


