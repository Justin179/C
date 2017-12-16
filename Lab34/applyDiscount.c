/*
 * applyDiscount.c
 *
 *  Created on: 2017¦~12¤ë16¤é
 *      Author: Administrator
 */

#include "discount.h"

// discountRate defined in other places
extern float discountRate;

float applyDiscount(int price){
	return (float) price*discountRate;
}
