/*
 * MyCar.h
 *
 *  Created on: 2018¦~1¤ë6¤é
 *      Author: Administrator
 */

#ifndef MYCAR_H_
#define MYCAR_H_

class MyCar {
	static int counter;
	mutable int foo;
public:
	int getMagic() const;
	static const int magicNumber=54321;
	MyCar();
	virtual ~MyCar();

	void setCounter(int x);
	static int getCounter(void);
	void resetCounter(void);
};

#endif /* MYCAR_H_ */
