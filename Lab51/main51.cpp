/*
 * main51.cpp
 *
 *  Created on: 2017�~12��23��
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int inputValue = 0;
	int sum = 0;
	while(cin >> inputValue){ // ���J���Ȥj��0�A�N�[�_��? ���J���ȩ�X�ӡA����ܼ�inputValue
		sum += inputValue;
	}
	cout << "total=" << sum << endl;
	return 0;
}


