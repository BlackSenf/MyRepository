/*
 * Bruch.cpp
 *
 *  Created on: 10.01.2013
 *      Author: Lukas
 */


/*
 try    {
        Result = Divide(5, 0);
    }    catch(const eMathError &Exception)    {
        std::cout << "Division durch 0 ist nicht möglich!";
    }
 */

#include <iostream>
#include <math.h>
#include "Bruch.h"

namespace std {

Bruch::Bruch(long bruch_z,long bruch_n) {
	Bruch::bruch_z = bruch_z;
	Bruch::bruch_n = bruch_n;
	Bruch::excp = false;
}
Bruch::Bruch(){
	Bruch::bruch_n = 1;
	Bruch::bruch_z = 1;
	Bruch::excp = false;
}
Bruch::~Bruch() {
}

long Bruch::getBruch_z(){

	return Bruch::bruch_z;
}
long Bruch::getBruch_n(){

	return Bruch::bruch_n;
}
void Bruch::setBruch(long bruch_z,long bruch_n) {

	Bruch::bruch_z = bruch_z;
	Bruch::bruch_n = bruch_n;
}
void Bruch::Bruch_division(Bruch a,Bruch b){
	{
		if(a.bruch_n == 0 || b.bruch_n == 0)
		{
			if(a.bruch_z == 0 || b.bruch_z == 0)
			{
				Bruch::excp = true;
				throw "FEHLER, division 0 durch 0!!!";
			}
			else
			{
				Bruch::excp = true;
				throw "FEHLER, division durch 0!!!";
			}
		}

		Bruch::bruch_z = a.bruch_z * b.bruch_n;
		Bruch::bruch_n = a.bruch_n * b.bruch_z;

		long ggTn = ggT(Bruch::bruch_z,Bruch::bruch_n);
		long ggTz = ggT(Bruch::bruch_n,Bruch::bruch_z);

		Bruch::bruch_z = Bruch::bruch_z/ggTz;
		Bruch::bruch_n = Bruch::bruch_n/ggTn;

	}
}

void Bruch::Bruch_multipl(Bruch a,Bruch b)
{

	if(a.bruch_n == 0 || b.bruch_n == 0)
	{
		if(a.bruch_z == 0 || b.bruch_z == 0)
		{
			Bruch::excp = true;
			throw "FEHLER, division 0 durch 0!!!";
		}
		else
		{
			Bruch::excp = true;
			throw "FEHLER, division durch 0!!!";
		}
	}

	Bruch::bruch_z = a.bruch_z * b.bruch_z;
	Bruch::bruch_n = a.bruch_n * b.bruch_n;

	long ggTn = ggT(Bruch::bruch_z,Bruch::bruch_n);
	long ggTz = ggT(Bruch::bruch_n,Bruch::bruch_z);

	Bruch::bruch_z = Bruch::bruch_z/ggTz;
	Bruch::bruch_n = Bruch::bruch_n/ggTn;


}

void Bruch::Bruch_minus(Bruch a, Bruch b)
{
	if(a.bruch_n == 0 || b.bruch_n == 0)
	{
		if(a.bruch_z == 0 || b.bruch_z == 0)
		{
			Bruch::excp = true;
			throw "FEHLER, division 0 durch 0!!!";
		}
		else
		{
			Bruch::excp = true;
			throw "FEHLER, division durch 0!!!";
		}
	}

	Bruch::bruch_z = b.bruch_n * a.bruch_z - a.bruch_n * b.bruch_z;
	Bruch::bruch_n = a.bruch_n * b.bruch_n;

	long ggTn = ggT(Bruch::bruch_z,Bruch::bruch_n);
	long ggTz = ggT(Bruch::bruch_n,Bruch::bruch_z);

	Bruch::bruch_z = Bruch::bruch_z/ggTz;
	Bruch::bruch_n = Bruch::bruch_n/ggTn;

}

void Bruch::Bruch_plus(Bruch a,Bruch b)
{
	if(a.bruch_n == 0 || b.bruch_n == 0)
	{
		if(a.bruch_z == 0 || b.bruch_z == 0)
		{
			Bruch::excp = true;
			throw "FEHLER, division 0 durch 0!!!";
		}
		else
		{
			Bruch::excp = true;
			throw "FEHLER, division durch 0!!!";
		}
	}

	Bruch::bruch_z = a.bruch_n * b.bruch_z + b.bruch_n * a.bruch_z;
	Bruch::bruch_n = a.bruch_n * b.bruch_n;

	long ggTn = ggT(Bruch::bruch_z,Bruch::bruch_n);
	long ggTz = ggT(Bruch::bruch_n,Bruch::bruch_z);

	Bruch::bruch_z = Bruch::bruch_z/ggTz;
	Bruch::bruch_n = Bruch::bruch_n/ggTn;
}

long Bruch::ggT(long a, long b) {
	if (a == 0)
	{
		return b;
	}
	else if(b == 0)
	{
		return a;
	}
	else if(a<0)
	{
		a = -a;
	}
	else if(b<0)
	{
		b = -b;
	}

	return ggT(b, a%b);
}
} /* namespace std */
