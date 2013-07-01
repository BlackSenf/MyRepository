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
#include <cmath>

using namespace std;

int main() {

	//Deklerationen
	double r,u,v,o,OR,VR,VO;
	char dummy;

	//Info
	cout << "Copyright by Lukas Oehlinger, 4CHELI 12/13. " << endl;
	cout << "Bitte geben Sie den Kugelradius ein: " << endl;

	//Eingabe
	cin >> r;

	cout << "test" << endl;

	//Berechnungen
	u = 2*r*3.14;
	v = (4/3)*3.14*(r*r*r);
	o = 4*3.14*r*r;
	OR = o/r;
	VR = v/r;
	VO = v/o;

	//Ausgaben
	cout << "Kugelumfang: " << u << endl;
	cout << "Kugelvolumen: " << v << endl;
	cout << "Kugeloberflaeche: " << o << endl;
	cout << "Verhaeltniss Oberflaeche zu Radius: " << OR << endl;
	cout << "Verhaeltniss Volumen zu Radius: " << VR << endl;
	cout << "Verhaeltniss Volumen zu Oberflaeche: " << VO << endl;

	//Powerfail
	cout << "press any key and [ENTER]" << endl;
	cin >> dummy;

	return 0;
}
