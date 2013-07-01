//============================================================================
// Name        : 016_RS-FlipFlop.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : RS FF
//============================================================================

#include <iostream>
#include "RS_FlipFlop.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	RS_FlipFlop FF;


	FF.setS(1);
	FF.setR(0);
	cout << FF.getQ() << endl;

	FF.setS(0);
	FF.setR(1);
	cout << FF.getQ() << endl;

	FF.setS(0);
	FF.setR(0);
	cout << FF.getQ() << endl;



	return 0;
}
