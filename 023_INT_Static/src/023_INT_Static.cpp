//============================================================================
// Name        : 023_INT_Static.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Inti.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	Inti i(1);
	Inti i2(2);
	Inti i3(3);
	Inti i4(3);
	Inti i5(5);
	Inti i6(7);
	Inti i7(7);

	cout << "Max: " << i.getMax() << endl;
	cout << "Min: " << i.getMin() << endl;
	cout << "Anzahl: " << i.getAnzahl() << endl;


	return 0;
}
