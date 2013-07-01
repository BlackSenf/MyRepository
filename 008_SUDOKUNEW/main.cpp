//============================================================================
// Name        : 008_Sudoku.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description :
//============================================================================

#include <iostream>
#include "Sudoku.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;

	Sudoku s;

	s.loadPredefinedExample(1);

	s.print();

	s.solve(0,0);

	s.print();




	return 0;
}


