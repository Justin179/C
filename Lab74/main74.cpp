/*
 * main74.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#include<iostream>
#include "counter1.h"
#include "counter2.h"
void addCounter1() {
	counter1++;
}
void addCounter2() {
	counter2++;
}
int main(int argc, char **argv) {
	setupCounter1();
	displayCounter1();
	addCounter1();
	displayCounter1();
	// using namespace inside counter2
	setupCounter2();
	displayCounter2();
	addCounter2();
	displayCounter2();

	return 0;
}


