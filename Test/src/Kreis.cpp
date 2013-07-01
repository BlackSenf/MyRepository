/*
 * Kreis.cpp
 *
 *  Created on: 12.12.2012
 *      Author: Lukas
 */

#include "Kreis.h"
#include <iostream>
#include <math.h>

namespace std {

Kreis::Kreis() : Flaechenform() {
	Kreis::r1 = 0.0;
}

Kreis::~Kreis(void) {
}

void Kreis::setR1(double r1)
{
	Kreis::r1 = r1;
}

double Kreis::getR1()
{
	return Kreis::r1;
}

double Kreis::getResult()
{
	return Kreis::getR1() * Kreis::getR1() * M_PI;
}
}
