/*
 * Sample.h
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#ifndef SAMPLE_H_
#define SAMPLE_H_

class Sample {
	int foo;
public:
	Sample();
	virtual ~Sample();

	int getFoo() const {
		return foo;
	}

	void setFoo(int foo) {
		this->foo = foo;
	}
};

#endif /* SAMPLE_H_ */
