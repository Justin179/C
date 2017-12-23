/*
 * main51.cpp
 *
 *  Created on: 2017年12月23日
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int inputValue = 0;
	int sum = 0;
	while(cin >> inputValue){ // 當輸入的值大於0，就加起來? 把輸入的值抽出來，放到變數inputValue
		sum += inputValue;
	}
	cout << "total=" << sum << endl;
	return 0;
}


