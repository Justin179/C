/*
 * applyDiscount.c
 *
 *  Created on: 2017�~12��16��
 *      Author: Administrator
 */

#include "discount.h"

// discountRate defined in other places
extern float discountRate;

float applyDiscount(int price){
	return (float) price*discountRate;
}
