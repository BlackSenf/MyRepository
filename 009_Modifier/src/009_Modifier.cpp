//============================================================================
// Name        : 007_Modifier.cpp
// Author      : Lukas Öhlinger
// Version     :
// Copyright   : 4CHELI 2012/13
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Oberklasse.h"
#include "Unterklasse.h"
#include "ToplevelKlasse.h"
using namespace std;

int main() {
	cout << "Copyright by Dominic Pranz" << endl << endl; // prints Copyright by Dominic Pranz

	Oberklasse oberklasse; //Anlegen eines Objekts
	//Unterklasse unterklasse; geht nicht, wieso? wahrscheinlich liegts an Unterklasse.h aber ???

	cout << "Oberklasse:" << endl;
	cout << "oberklasse.publicVariableOberklasse: " << oberklasse.publicVariableOberklasse << endl;

	//oberklasse.privateVariableOberklasse = 51;
	//oberklasse.protectedVariableOberklasse = 52;
	oberklasse.publicVariableOberklasse = 53;
	cout << "oberklasse.publicVariableOberklasse: " << oberklasse.publicVariableOberklasse << endl;

	//oberklasse.privateMethodOberklasse();
	//oberklasse.protectedMethodOberklasse();
	oberklasse.publicMethodOberklasse();
	cout << "oberklasse.publicVariableOberklasse: " << oberklasse.publicVariableOberklasse << endl;

	oberklasse.Schnittstelle();


	Unterklasse unterklasse; //Beim Konstruktor Aufruf wird zuerst Oberklasse, danach Unterklasse Konstuktor aufgerufen!

	//unterklasse.privateVariableOberklasse = 17;
	//unterklasse.protectedVariableOberklasse = 17;
	unterklasse.publicVariableOberklasse = 17; //pfui-> technisch möglich, ABER TRAGÖDIE
	unterklasse.changePrivateVariableofOberklasse(); //public
	unterklasse.changeProtectedVariableofOberklasse(); //public
	unterklasse.changePublicVariableofOberklasse(); //public
	unterklasse.publicMethodOberklasse();

	unterklasse.Schnittstelle();

	//oberklasse.~Oberklasse(); wird 2mal aufgerufen! FALSCH!!!
	//später *delete oberklasse;" POINTER!

	//Am Ende des Programms wird der Destruktor aufgerufen
	return 0;//Destruktor für alle Objekte, bei Abeleitungen zuerst lokal, danach global
}
