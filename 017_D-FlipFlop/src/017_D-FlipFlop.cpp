//============================================================================
// Name        : 017_D-FlipFlop.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : D FF
//============================================================================

#include <iostream>
#include "D_FlipFlop.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	D_FlipFlop FF;

	FF.setD(1);
	cout << FF.getQ() << endl;
	FF.setClk(1);
	cout << FF.getQ() << endl;


	return 0;
}
