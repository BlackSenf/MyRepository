/*
 * Add.cpp
 *
 *  Created on: 26.09.2012
 *      Author: Lukas
 */

#include "Add.h"

Add::Add() {
	// TODO Auto-generated constructor stub
	z1 = 0.0;
	z2 = 0.0;
}

Add::~Add() {
	// TODO Auto-generated destructor stub
}


void Add::set_z1(double z1)
{
	Add::z1 = z1;
}

void Add::set_z2(double z2)
{
	Add::z2 = z2;
}

double Add::calculate()
{
	return Add::z1 + Add::z2;
}
