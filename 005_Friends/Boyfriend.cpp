/*
 * Boyfriend.cpp
 *
 *  Created on: 10.10.2012
 *      Author: Lukas
 */

#include "Boyfriend.h"
#include <iostream>

namespace std {

Boyfriend::Boyfriend() {
	Boyfriend::next();
	// TODO Auto-generated constructor stub

}

Boyfriend::~Boyfriend() {
	// TODO Auto-generated destructor stub
}
void Boyfriend::setmoney(double geld)
{
	Boyfriend::money = geld;
}
double Boyfriend::getmoney()
{
	return Boyfriend::money;
}
void Boyfriend::tellme()
{
	Friend::tellme(); //!!
	cout << "Boyfriend::money: " << getmoney() << endl;

}
void Boyfriend::next()
{
	Friend::next();
	Boyfriend::setmoney(0);
}
}
