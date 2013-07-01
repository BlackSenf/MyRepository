/*
 * Oberklasse.cpp
 *
 *  Created on: 05.12.2012
 *      Author: Lukas
 */

#include "Oberklasse.h"


namespace std {

Oberklasse::Oberklasse() {
	//INNERHALB der Klasse kann auf alle Variablen zugegriffen werden
	cout << "Konstruktor der Oberklasse aufgerufen" << endl;
	privateVariableOberklasse = 11;
	publicVariableOberklasse = 12;
	protectedVariableOberklasse = 13;

}

Oberklasse::~Oberklasse() {
	cout << "Destruktor der Oberklasse aufgerufen" << endl;
}

void Oberklasse::privateMethodOberklasse() {
	privateVariableOberklasse = 21;
	publicVariableOberklasse = 22;
	protectedVariableOberklasse = 23;
}

void Oberklasse::publicMethodOberklasse() {
	privateVariableOberklasse = 31;
	publicVariableOberklasse = 32;
	protectedVariableOberklasse = 33;
}

void Oberklasse::protectedMethodOberklasse() {
	privateVariableOberklasse = 41;
	publicVariableOberklasse = 42;
	protectedVariableOberklasse = 43;
}



//Implemetierung Schnittstelle()!!
void Oberklasse::Schnittstelle()
{
	cout << "Oberklasse::Schnittstelle()." << endl;
}

} /* namespace std */
