//============================================================================
// Name        : 007_Modifier.cpp
// Author      : Lukas Öhlinger
// Version     :
// Copyright   : 4CHELI 2012/13
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Umstellung auf Pointer
* Oberklasse* oberklassePtr = new Oberklasse();
* Unterklasse* unterklassePtr = new Unterklasse();
* "." -> "Ptr->"
* ACHTUNG Destruktor wird nicht mehr AUTOMATISCH aufegrufen!
* delete unterklassePtr
* delete oberklassePtr;
*/

#include <iostream>
#include "Oberklasse.h"
#include "Unterklasse.h"
#include "ToplevelKlasse.h"
using namespace std;

int main() {
	cout << "Copyright by öhli" << endl; // prints Copyright by Dominic Pranz

	//Oberklasse oberklasse;
	Oberklasse* oberklassePtr = new Oberklasse();


	cout << "Oberklasse:" << endl;
	cout << "oberklassePtr->publicVariableOberklasse: " << oberklassePtr->publicVariableOberklasse << endl;

	//oberklasse.privateVariableOberklasse = 51;
	//oberklasse.protectedVariableOberklasse = 52;
	oberklassePtr->publicVariableOberklasse = 53;
	cout << "oberklassePtr->publicVariableOberklasse: " << oberklassePtr->publicVariableOberklasse << endl;

	//oberklasse.privateMethodOberklasse();
	//oberklasse.protectedMethodOberklasse();
	oberklassePtr->publicMethodOberklasse();
	cout << "oberklassePtr->publicVariableOberklasse: " << oberklassePtr->publicVariableOberklasse << endl;

	oberklassePtr->Schnittstelle();


	Unterklasse* unterklassePtr = new Unterklasse(); //Beim Konstruktor Aufruf wird zuerst Oberklasse, danach Unterklasse Konstuktor aufgerufen!

	//unterklasse.privateVariableOberklasse = 17;
	//unterklasse.protectedVariableOberklasse = 17;
	unterklassePtr->publicVariableOberklasse = 17; //pfui-> technisch möglich, ABER TRAGÖDIE
	unterklassePtr->changePrivateVariableofOberklasse(); //public
	unterklassePtr->changeProtectedVariableofOberklasse(); //public
	unterklassePtr->changePublicVariableofOberklasse(); //public
	unterklassePtr->publicMethodOberklasse();

	unterklassePtr->Schnittstelle();

	//oberklassePtr ->~Oberklasse(); Sestruktor NICHT MANUELL aufrufen!

	delete unterklassePtr;
	delete oberklassePtr;


	//oberklasse.~Oberklasse(); wird 2mal aufgerufen! FALSCH!!!
	//später *delete oberklasse;" POINTER!

	//Am Ende des Programms wird der Destruktor aufgerufen
	return 0;//Destruktor für alle Objekte, bei Abeleitungen zuerst lokal, danach global
}
