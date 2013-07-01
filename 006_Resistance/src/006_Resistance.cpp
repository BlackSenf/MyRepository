//============================================================================
// Name        : 006_Resistance.cpp
// Author      : Lukas Oehlinger
// Version     : V1.0
// Copyright   : By Lukas Oehlinger
// Description : Berechnen einer Parallelen bzw. Seriellen Widerstandschaltung
//============================================================================

#include <iostream>
#include "restistance.h"
using namespace std;

int main() {
	cout << "CP by Lukas Oehlinger" << endl;

	double Widerstand;
	restistance r;

	Widerstand = r.seriell(1000.0);
	Widerstand = r.seriell(1000.0);
	Widerstand = r.parallel(1000.0);
	Widerstand = r.seriell(1000.0);
	Widerstand = r.parallel(1000.0);

	cout << "Widerstand = " << Widerstand << endl;

	return 0;
}
