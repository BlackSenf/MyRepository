/*
 * MyClass.cpp
 *
 *  Created on: 20.02.2013
 *      Author: Lukas
 */

#include <iostream>
#include "MyClass.h"

namespace std {

MyClass::MyClass() {
	// TODO Auto-generated constructor stub

}
void MyClass::useLocalStaticVariable()
{
	static int localStaticVariable;
	//Wert der lokalen static Variable bleibt erhalten
	//nur lokal ansprechbar
	//Speicherung im Datensegment
	//automatisch mit 0 vorbelegt

	cout << "localstaticVariable= " << localStaticVariable << endl;

	localStaticVariable++;

}

MyClass::~MyClass() {
	// TODO Auto-generated destructor stub
}

}
