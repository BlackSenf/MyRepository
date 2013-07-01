//============================================================================
// Name        : Test.cpp
// Author      : Lukas Oehlinger
// Version     : 1.0
// Copyright   : Copyright by Lukas Öhlinger
// Description : Kreis berechnung
//============================================================================

#include <iostream>
#include "Kreis.h"
#include "Kreisring.h"
using namespace std;

int main() {
	cout << "Copyright by Lukas Oehlinger / 4cheli" << endl;

	Kreis r1;
	r1.setR1(5.0);
	cout << r1.getResult() << endl;

	Kreisring r2;
	r2.setR1(5.0);
	r2.setR2(2.0);
	cout << r2.getResult() << endl;

	return 0;
}
