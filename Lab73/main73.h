/*
 * main73.cpp
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#ifndef MAIN73_H_
#define MAIN73_H_
#include <iostream>

namespace MyNameSpace {
	int globalI,globalJ;

	void myFunc(int j){
		std::cout << "" << j;
		std::cout << std::endl;
	}

	class MyClass{
	public:
		void setGlobalI(int x){
			globalI = x;
		}
		int getGlobalI(void){
			return globalI;
		}
		int getGlobalJ(void){
			return globalJ;
		}
	};
}

#endif /* COUNTER1_H_ */
