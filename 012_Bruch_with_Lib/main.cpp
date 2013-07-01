//============================================================================
// Name        : 13_Bruchrechnen.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My cp is my cp!
// Description :
//============================================================================

#include <iostream>
#include <assert.h>
#include "Bruch.h"

using namespace std;


int main() {

	cout << "Copyright by Lukas Oehlinger" << endl;

	/*
	while(1)
	{
		Bruch Bruch1;
		Bruch Bruch2;
		Bruch Ergebnis;
		long n;
		long z;
		int ber;

		cout << "Geben die den Zähler von Bruch 1 ein!" << endl;
		cin >> z;
		cout << "Geben die den Nenner von Bruch 1 ein!" << endl;
		cin >> n;
		Bruch1.setBruch(z,n);

		cout << "Geben die den Zähler von Bruch 2 ein!" << endl;
		cin >> z;
		cout << "Geben die den Nenner von Bruch 2 ein!" << endl;
		cin >> n;
		Bruch2.setBruch(z,n);

		cout << "Geb en sie die Rechen Methode ein: 1 = +, 2 = -, 3 = *, 4 = /" << endl;
		cin >> ber;
		switch(ber)
		{
		case 1:
			try{
				Ergebnis.Bruch_plus(Bruch1, Bruch2);
			}
			catch(const char* msg)
			{
				cout << msg << endl;
			}
		case 2:
			try{
				Ergebnis.Bruch_minus(Bruch1, Bruch2);
			}
			catch(const char* msg)
			{
				cout << msg << endl;
			}
		case 3:
			try{
				Ergebnis.Bruch_multipl(Bruch1, Bruch2);
			}
			catch(const char* msg)
			{
				cout << msg << endl;
			}
		case 4:
			try{
				Ergebnis.Bruch_division(Bruch1, Bruch2);
			}
			catch(const char* msg)
			{
				cout << msg << endl;
			}
		}

		cout << "Ergebnis lautet: " << Ergebnis.getBruch_z() << "/" << Ergebnis.getBruch_n() << endl;
	}*/

	Bruch Bruch1;
	Bruch Bruch2;
	Bruch Ergebnis;

	Bruch1.setBruch(0,4);
	Bruch2.setBruch(5,0);
	try{
		Ergebnis.Bruch_multipl(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << endl;
	}

	cout << "Ergebnis lautet: " << Ergebnis.getBruch_z() << "/" << Ergebnis.getBruch_n() << endl;

	return 0;
}

