/*
 * Inti.cpp
 *
 *  Created on: 15.05.2013
 *      Author: Lukas
 */

#include "Inti.h"

namespace std {

Inti::Inti()
{
}

Inti::Inti(int zahl)
{
	Inti::intg = zahl;

	Inti::anzahl ++;

	if(anzahl == 1)
	{
		Inti::max = zahl;
		Inti::min = zahl;
	}
	else
	{
		if(Inti::max <= zahl)
		{
			Inti::max = zahl;
		}

		if(Inti::min >= zahl)
		{
			Inti::min = zahl;
		}

	}
}

Inti::~Inti()
{
	Inti::anzahl --;
}

int Inti::getAnzahl()
{
	return Inti::anzahl;
}

int Inti::getMax()
{
	return Inti::max;
}

int Inti::getMin()
{
	return Inti::min;
}

//WICHTIG!!!
int Inti::anzahl = 0;
int Inti::max = 0;
int Inti::min = 0;

}
