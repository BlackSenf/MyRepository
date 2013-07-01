/*
 * gatterE1.cpp
 *
 *  Created on: 24.10.2012
 *      Author: Lukas
 */
#include "GatterE1.h"
#include <iostream>

GatterE1::GatterE1(bool e1)
{
	GatterE1::e1 = e1;
}

GatterE1::~GatterE1()
{
}

void GatterE1::setE1(bool e1)
{
	GatterE1::e1 = e1;
}

bool GatterE1::getResult()
{
	std::cout << "GatterE1::getResult() - Fehler in der Methode in der Subklasse!\n";
	return false;
}

bool GatterE1::getE1()
{
	return GatterE1::e1;
}
