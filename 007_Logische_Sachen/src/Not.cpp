/*
 * Not.cpp
 *
 *  Created on: 24.10.2012
 *      Author: Lukas
 */
#include "Not.h"
#include "GatterE1.h"

Not::Not():
	GatterE1::GatterE1(false) {
}

Not::Not(bool e1):
	GatterE1::GatterE1(e1){
}

Not::~Not()
{
}

bool Not::getResult()
{
	return !GatterE1::getE1();
}
