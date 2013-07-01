//============================================================================
// Name        : 014_MyClassStatic.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyClass.h"
using namespace std;

int main() {
	cout << "CP by Oehli" << endl; // prints CP by Oehli

	MyClass Test;

	Test.useLocalStaticVariable();
	Test.useLocalStaticVariable();
	Test.useLocalStaticVariable();

	cout << endl;

	MyClass Test1;

	Test1.useLocalStaticVariable();
	Test1.useLocalStaticVariable();
	Test1.useLocalStaticVariable();


	return 0;
}
