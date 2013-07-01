//============================================================================
// Name        : LittleorBigEndian.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Little or Bid Endian Überprüfung
//============================================================================

#include <iostream>
using namespace std;

/*bool istLittle()
{
    int i = 1;
    if(*(char *)&i == 1)
        return true;
    else
        return false;
}*/

int main() {


	/*if(istLittle() == true)
	{
		cout << "Rechner ist little Endian!" << endl;
	}
	else
	{
		cout << "Rechner ist big Endian!" << endl;
	}*/

	 while(1)
	    {
	        unsigned long lvar = 0x12345678;
			unsigned char *pVar;
			unsigned char test;

			pVar = (unsigned char *) &lvar;

			test = *pVar;
			pVar++;
			test = *pVar;
	    }


	return 0;
}
