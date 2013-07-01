//============================================================================
// Name        : 013_Pi.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
	long double ergebnis = 0;

	cout << "CP by Oehli" << endl;

	cout << "Zahl eingeben" << endl;
	long j;
	cin >> j;

	for( int i = 0; i < j; i++)
	{
 ergebnis += (1.0/pow(16.0, i)) * (8.0/(8.0*i+2.0)+4.0/(8.0*i+3.0)+4.0/(8.0*i+4.0)-1.0/(8.0*i+7.0));
	}
	ergebnis = 0.5*ergebnis;

	cout << "ergebnis = " << ergebnis << endl;


	printf(" %.10Lf \n", ergebnis);

	double ergebnis2 = M_PI - ergebnis;

	cout << "differenz =  " << ergebnis2 << endl;


	return 0;
}
