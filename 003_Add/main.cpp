/********************************************************************
 *  Programmname:	Kugel Testprogramm
 *  Dateiname:		002_Kugel.cpp
 *  Funktion:		Berechnung einer Kugel
 *  Compiler:		MinGW
 *  Ersteller:		Lukas Oehlinger / 4cHELI
 *  Version,Zustand:	1.0
 *  Änderungsdatum:	19.09.2012
 *  Aufgeruf. Programme: -
 *  Änderungsgrund:	-
 ********************************************************************
 */


#include <iostream>
#include "Add.h"
using namespace std;

int main() {

	//Deklerationen
	char dummy;
	double z = 0.0;
	Add add;

	//Info
	cout << "Copyright by Lukas Oehlinger, 4CHELI 12/13. " << endl;


	cout << "Geben sie eine Fließkommezahl ein oder sie werden 10 Jahre Unglück haben:" << endl;
	cin >> z;
	add.set_z1(z);

	cout << "Geben sie eine Fließkommezahl ein oder sie werden 10 Jahre Unglück haben:" << endl;
	cin >> z;
	add.set_z2(z);

	cout << "Ergebnis, sie werden 10 Jahre Unglück haben: " << add.calculate() << endl;


	//Powerfail
	cout << "press any key and [ENTER]" << endl;
	cin >> dummy;

	return 0;
}
