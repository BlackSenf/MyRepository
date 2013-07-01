/*
 * Unterklasse.cpp
 *
 *  Created on: 09.01.2013
 *      Author: Lukas
 */

#include "Unterklasse.h"


namespace std {

Unterklasse::Unterklasse() {
	//INNERHALB der Klasse kann auf alle Variablen zugegriffen werden
		cout << "Konstruktor der Unterklasse aufgerufen" << endl;


}

Unterklasse::~Unterklasse() {
	cout << "Destruktor der Unterklasse aufgerufen" << endl;
}

void Unterklasse::changePublicVariableofOberklasse()
{
	publicVariableOberklasse = 61;
	Oberklasse::publicVariableOberklasse = 71;
}
void Unterklasse::changePrivateVariableofOberklasse()
{

}
void Unterklasse::changeProtectedVariableofOberklasse()
{

}

}
