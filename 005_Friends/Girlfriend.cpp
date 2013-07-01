/*
 * Girlfriend.cpp
 *
 *  Created on: 03.10.2012
 *      Author: Lukas
 */

#include "Girlfriend.h"
#include <iostream>

namespace std {

Girlfriend::Girlfriend() {
	Girlfriend::next();
	// TODO Auto-generated constructor stub

}

Girlfriend::~Girlfriend() {
	// TODO Auto-generated destructor stub
}

void Girlfriend::setbikinisize(string BH)
{
	Girlfriend::bikiniszize = BH;
}
string Girlfriend::getbikinisize()
{
	return Girlfriend::bikiniszize;
}
void Girlfriend::tellme()
{
	Friend::tellme(); //!!
	cout << "Girlfriend::bikiniszie: " << getbikinisize() << endl;

}
void Girlfriend::next()
{
	Friend::next();
	Girlfriend::setbikinisize("");
}
}
