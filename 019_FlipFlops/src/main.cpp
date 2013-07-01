//============================================================================
// Name        : FlipFlops.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "RS_FlipFlop.h"
#include "D_FlipFlop.h"
#include "JK_FlipFlop.h"

using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	JK_FlipFlop JK;

	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setJ(1);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(1);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setK(1);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(0);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(1);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setJ(0);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(0);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(1);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setK(0);
	cout << JK.getQ() << JK.getQ_() << endl;

	JK.setClk(0);
	cout << JK.getQ() << JK.getQ_() << endl;

	return 0;
}
