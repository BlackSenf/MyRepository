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
#include "sum.h"
using namespace std;

int main() {

	//Deklerationen
	char dummy;
	double z;
	Sum sum1; //Konstruktor wir aufgerufen


	//Info
	cout << "Copyright by Lukas Oehlinger, 4CHELI 12/13. " << endl;


	cout << "Geben sie eine Fließkommezahl ein oder sie werden 10 Jahre Unglück haben:" << endl;
	cin >> z;
	sum1.SumUp(z);
	sum1.SumUp(5.12589);
	cout << "Sie werden sterben mit der Zahl: " << sum1.get_Sum() << endl;





	//Powerfail
	cout << "press any key and [ENTER]" << endl;
	cin >> dummy;

	return 0;
}
