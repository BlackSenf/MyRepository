//============================================================================
// Name        : 018_7474.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : 7474 Flip Flop
//============================================================================

#include <iostream>
#include "RS.h"

using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	RS r;
	r.setS(0);
	r.setR(0);
	r.setD(0);
	r.setClk(1);
	cout << "reset S, reset R, reset D, set Clk" << endl;
	cout << "Q !Q" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setS(1);
	cout << "set S" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setD(1);
	cout << "set D" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setClk(0);
	cout << "reset Clk" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setR(1);
	cout << "set R" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setClk(1);
	cout << "set Clk" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setD(0);
	cout << "reset D" << endl;
	cout << r.getQ() << r.getQ_() << endl;


	r.setClk(0);
	cout << "reset Clk" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setR(0);
	cout << "reset R" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	r.setD(1);
	cout << "set D" << endl;
	cout << r.getQ() << r.getQ_() << endl;

	return 0;
}

