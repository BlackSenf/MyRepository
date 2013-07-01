//============================================================================
// Name        : 13_Bruchrechnen.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My cp is my cp!
// Description :
//============================================================================

#include <iostream>
#include <assert.h>
#include "Bruch.h"

using namespace std;


//cout << Ergebnis.getBruch_z() << "/" << Ergebnis.getBruch_n() << endl;

int main() {

	cout << "Copyright by Lukas Oehlinger" << endl;

	Bruch Bruch1;
	Bruch Bruch2;
	Bruch Ergebnis;

	//Test1
	Bruch1.setBruch(1,2);
	Bruch2.setBruch(1,3);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 6);
	cout << "Fall 1 OK" << endl;

	//Test2
	Bruch1.setBruch(1,4);
	Bruch2.setBruch(1,5);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 20);
	cout << "Fall 2 OK" << endl;

	//Test3
	Bruch1.setBruch(1,6);
	Bruch2.setBruch(1,12);
	Ergebnis.Bruch_division(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 2);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall 3 OK" << endl;


	//Test4
	Bruch1.setBruch(1,7);
	Bruch2.setBruch(1,8);
	Ergebnis.Bruch_division(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 8);
	assert( Ergebnis.getBruch_n() == 7);
	cout << "Fall 4 OK" << endl;

	//Test5
	Bruch1.setBruch(1,9);
	Bruch2.setBruch(1,3);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 4);
	assert( Ergebnis.getBruch_n() == 9);
	cout << "Fall 5 OK " << endl;

	//Test6
	Bruch1.setBruch(1,10);
	Bruch2.setBruch(1,7);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 17);
	assert( Ergebnis.getBruch_n() == 70);
	cout << "Fall 6 OK" << endl;

	//Test7
	Bruch1.setBruch(1,11);
	Bruch2.setBruch(1,17);
	Ergebnis.Bruch_minus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 6);
	assert( Ergebnis.getBruch_n() == 187);
	cout << "Fall 7 OK" << endl;

	//Test8
	Bruch1.setBruch(3,7);
	Bruch2.setBruch(7,3);
	Ergebnis.Bruch_minus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == -40);
	assert( Ergebnis.getBruch_n() == 21);
	cout << "Fall 8 OK" << endl;


	//Testreihe lt Übungszettel:
	//Test1
	Bruch1.setBruch(0,1);
	Bruch2.setBruch(1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 1 OK" << endl;

	//Test2
	Bruch1.setBruch(1,1);
	Bruch2.setBruch(1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 2 OK" << endl;

	//Test3
	Bruch1.setBruch(3,9);
	Bruch2.setBruch(1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 3);
	cout << "Fall Testreihe 3 OK" << endl;

	//Test4
	Bruch1.setBruch(14,21);
	Bruch2.setBruch(1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 2);
	assert( Ergebnis.getBruch_n() == 3);
	cout << "Fall Testreihe 4 OK" << endl;

	//Test5
	Bruch1.setBruch(0,0);
	Bruch2.setBruch(1,1);
	try{
		Ergebnis.Bruch_multipl(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 5" << endl;
	}
	if(Ergebnis.excp == false)
	{ assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall Testreihe 5 OK " << endl;

	//Test6
	Bruch1.setBruch(-2,-4);
	Bruch2.setBruch(1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == -2);
	cout << "Fall Testreihe 6 OK" << endl;

	//Test7
	Bruch1.setBruch(7,8);
	Bruch2.setBruch(0,1);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 7);
	assert( Ergebnis.getBruch_n() == 8);
	cout << "Fall Testreihe 7 OK" << endl;

	//Test8
	Bruch1.setBruch(0,1);
	Bruch2.setBruch(7,8);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 7);
	assert( Ergebnis.getBruch_n() == 8);
	cout << "Fall Testreihe 8 OK" << endl;

	//Test9
	Bruch1.setBruch(0,1);
	Bruch2.setBruch(0,1);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 9 OK" << endl;

	//Test10
	Bruch1.setBruch(7,8);
	Bruch2.setBruch(-7,8);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 10 OK" << endl;

	//Test11
	Bruch1.setBruch(2,9);
	Bruch2.setBruch(5,9);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 7);
	assert( Ergebnis.getBruch_n() == 9);
	cout << "Fall Testreihe 11 OK" << endl;

	//Test12
	Bruch1.setBruch(1,3);
	Bruch2.setBruch(1,6);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 2);
	cout << "Fall Testreihe 12 OK" << endl;

	//Test13
	Bruch1.setBruch(14,12);
	Bruch2.setBruch(33,18);
	Ergebnis.Bruch_plus(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 3);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 13 OK" << endl;

	//Test14
	Bruch1.setBruch(0,1);
	Bruch2.setBruch(3,4);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 14 OK" << endl;

	//Test15
	Bruch1.setBruch(3,4);
	Bruch2.setBruch(0,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 1);
	cout << "Fall Testreihe 15 OK" << endl;

	//Test16
	Bruch1.setBruch(1,1);
	Bruch2.setBruch(7,8);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 7);
	assert( Ergebnis.getBruch_n() == 8);
	cout << "Fall Testreihe 16 OK" << endl;

	//Test17
	Bruch1.setBruch(-1,1);
	Bruch2.setBruch(9,11);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == -9);
	assert( Ergebnis.getBruch_n() == 11);
	cout << "Fall Testreihe 17 OK" << endl;

	//Test18
	Bruch1.setBruch(9,11);
	Bruch2.setBruch(-1,1);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == -9);
	assert( Ergebnis.getBruch_n() == 11);
	cout << "Fall Testreihe 18 OK" << endl;

	//Test19
	Bruch1.setBruch(14,12);
	Bruch2.setBruch(33,18);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 77);
	assert( Ergebnis.getBruch_n() == 36);
	cout << "Fall Testreihe 19 OK" << endl;

	//Test20
	Bruch1.setBruch(12345,123456);
	Bruch2.setBruch(9876,543);
	Ergebnis.Bruch_multipl(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 3386645);
	assert( Ergebnis.getBruch_n() == 1862128);
	cout << "Fall Testreihe 20 OK" << endl;

	//Test21
	Bruch1.setBruch(3,4);
	Bruch2.setBruch(0,1);
	Ergebnis.Bruch_division(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1);
	assert( Ergebnis.getBruch_n() == 0);
	cout << "Fall Testreihe 21 OK" << endl;

	//Test22
	Bruch1.setBruch(3386645,1862128);
	Bruch2.setBruch(9876,543);
	Ergebnis.Bruch_division(Bruch1, Bruch2);

	assert(Ergebnis.getBruch_z() == 1838948235);
	assert( Ergebnis.getBruch_n() == 1210506944);
	cout << "Fall Testreihe 22 OK" << endl;


	//Test23
	Bruch1.setBruch(-7,0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_multipl(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 23" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 23 OK" << endl;

	//Test24
	Bruch1.setBruch(-7,0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_division(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 24" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 24 OK" << endl;

	//Test25
	Bruch1.setBruch(-7,0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_minus(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 25" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 25 OK" << endl;

	//Test26
	Bruch1.setBruch(-7,0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_plus(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 26" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 26 OK" << endl;

	//Test27
	Bruch1.setBruch(-0,0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_division(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 27" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 27 OK" << endl;

	//Test28
	Bruch1.setBruch(-0,-0);
	Bruch2.setBruch(1,3);
	try{
		Ergebnis.Bruch_plus(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 28" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 28 OK" << endl;

	//Test29
	Bruch1.setBruch(30,156);
	Bruch2.setBruch(-0,-0);
	try{
		Ergebnis.Bruch_plus(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 29" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 29 OK" << endl;

	//Test30
	Bruch1.setBruch(30,156);
	Bruch2.setBruch(5,-0);
	try{
		Ergebnis.Bruch_plus(Bruch1, Bruch2);
	}
	catch(const char* msg)
	{
		cout << msg << "Testreihe 30" << endl;
	}
	if(Ergebnis.excp == false)
	{assert(Ergebnis.getBruch_z() == 0);
	assert( Ergebnis.getBruch_n() == 0);}
	cout << "Fall 30 OK" << endl;

	return 0;
}
