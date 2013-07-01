//============================================================================
// Name        : 022_GanzEgal_Static.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description :
//============================================================================

#include <iostream>
#include "Dreieck.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	Dreieck d1;
	cout << "d1.getNumber() = " << d1.getNumber() << endl;
	Dreieck d2;
	Dreieck d3;
	cout << "d2.getNumber() = " << d2.getNumber() << endl;
	cout << "d3.getNumber() = " << d3.getNumber() << endl;

	Dreieck *d4 = new Dreieck();
	cout << "d4->getNumber() = " << d4->getNumber() << endl;
	delete d4;


	return 0;
}
