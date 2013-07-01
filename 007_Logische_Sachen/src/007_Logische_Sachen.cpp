//============================================================================
// Name        : 007_Logische_Sachen.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description :
//============================================================================

#include <iostream>
#include "Not.h"

using namespace std;

int main() {
	cout << "CP by Oehli" << endl; // prints CP by Oehli

	bool eingabe;
	bool ausgabe;
	Not l;

	cout << "Bitte geben Sie 0 oder 1 ein: " << endl;
	cin >> eingabe;

	l.setE1(eingabe);
	ausgabe = l.getResult();
	cout <<"Out1 : " << ausgabe << endl;

	l.setE1(eingabe);
	ausgabe = l.getResult();
	cout <<"S1 : " << ausgabe << endl;

	l.setE1(ausgabe);
	ausgabe = l.getResult();
	cout <<"S2 : " << ausgabe << endl;

	l.setE1(ausgabe);
	ausgabe = l.getResult();
	cout <<"Out2 : " << ausgabe << endl;


	return 0;
}






