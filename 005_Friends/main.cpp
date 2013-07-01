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
#include "Friend.h"
#include "Girlfriend.h"
#include "Boyfriend.h"
using namespace std;

int main() {

	//Deklerationen
	char dummy;


	//Info
	cout << "Copyright by Lukas Oehlinger, 4CHELI 12/13. " << endl;

	Friend f;
	f.setfirstname("George");
	f.setlastname("Clooney");
	f.setnickname("Little Nick");
	f.setage(51);
	f.tellme();

	Girlfriend gf;
	gf.setfirstname("Jennifer");
	gf.setlastname("Lopez");
	gf.setnickname("J-Lo");
	gf.setage(43);
	gf.setbikinisize("75B");
	gf.tellme();

	Girlfriend gf2;
	gf2.setfirstname("Lana");
	gf2.setlastname("Del Rey");
	gf2.setnickname("Lani");
	gf2.setage(26);
	gf2.setbikinisize("DD");
	gf2.tellme();

	gf.next();
	gf.tellme();

	Boyfriend b;
	b.setfirstname("Lukas");
	b.setlastname("Oehlinger");
	b.setnickname("Big O");
	b.setage(17);
	b.setmoney(999);
	b.tellme();

	b.next();
	b.tellme();


	//Powershutdown
	cout << endl;
	cout << "press any key and [ENTER]" << endl;
	cin >> dummy;

	return 0;
}


