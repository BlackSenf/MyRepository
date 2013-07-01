//============================================================================
// Name        : Exception_Test.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;


double division(int a, int b)
{
   if( b == 0 || a == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main ()
{
   int x = 50;
   int y = 0;
   double z = 0;

   try {
     z = division(x, y);
     cout << z << endl;
   }catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}
