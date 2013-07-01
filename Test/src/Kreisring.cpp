/*
 * Kreisring.cpp
 *
 *  Created on: 12.12.2012
 *      Author: Lukas
 */

#include "Kreisring.h"
#include <iostream>
#include <math.h>

namespace std {

Kreisring::Kreisring() : Kreis() {
	Kreisring::r2 = 0.0;
}

Kreisring::~Kreisring(void) {
}

void Kreisring::setR2(double r2)
{
	Kreisring::r2 = r2;
}

double Kreisring::getR2()
{
	return Kreisring::r2;
}

double Kreisring::getResult()
{
	double r1 = Kreis::getR1() * Kreis::getR1()* M_PI;
	double r2 = Kreisring::getR2() * Kreisring::getR2() * M_PI;
	return r1 - r2;
}
}
