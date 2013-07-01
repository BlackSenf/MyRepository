/*
 * Dreieck.cpp
 *
 *  Created on: 15.05.2013
 *      Author: Lukas
 */

#include "Dreieck.h"

namespace std {

Dreieck::Dreieck() {

	x1 = 0;
	x2 = 0;
	x3 = 0;
	y1 = 0;
	y2 = 0;
	y3 = 0;


	number ++;
}

Dreieck::~Dreieck() {
}

int Dreieck::getNumber()
{
	return number;
}

int Dreieck::number = 0; //ACHTUNG WICHTIG! weil sons undefined reference Fehler

}

