#ifndef COUNTER1_H_
#define COUNTER1_H_

#include <iostream>
using namespace std;
static int counter1;
void setupCounter1() {
	counter1 = 99;
}
void displayCounter1() {
	cout << counter1 << endl;
}

#endif
