/*
 * Sum.cpp
 *
 *  Created on: 26.09.2012
 *      Author: Lukas
 */

#include "Sum.h"

Sum::Sum() {
	sum = 0.0;
	// TODO Auto-generated constructor stub

}

Sum::~Sum() {
	// TODO Auto-generated destructor stub
}

void Sum::SumUp(double z)
{
	Sum::sum += z;
}

double Sum::get_Sum()
{
	return Sum::sum;
}

void Sum::increment_Sum()
{
Sum::sum += 1.0;
}

void Sum::decrement_Sum()
{
	Sum::sum -= 1.0;
}
