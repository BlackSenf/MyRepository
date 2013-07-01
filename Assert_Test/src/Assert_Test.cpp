//============================================================================
// Name        : Assert_Test.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <assert.h>
using namespace std;

int main() {
	cout << "CP by Oehli" << endl;
	int x = 5;
	assert(x==5);
	cout << "alles gut" << endl;
	x = 6;
	assert(x!=5);
	cout << "alles gut" << endl;
	return 0;
}
