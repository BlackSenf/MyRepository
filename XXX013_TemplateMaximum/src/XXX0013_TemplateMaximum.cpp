//============================================================================
// Name        : XXX0013_TemplateMaximum.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : e
//============================================================================

#include <iostream>
#include <string>

using std::cout;
using std::endl;
// Funktionstemplate zum Tauschen von Werten beliebigen Datentyps
// ==============================================================
template <typename T>
void Swap(T& val1, T& val2){
	T temp(val1);
	val1 = val2;
	val2 = temp;
}
// Funktionstemplate zum Sortieren von Zahlen
// beliebigen Datentyps innerhalb eines Feldes
// ===========================================
// pValues ist der Zeiger auf den Beginn des Datenfeldes
// und noOfValues enthaelt die Anzahl der Daten
template <typename T>
void Sort(T pValues, int noOfValues){
	bool changed;       // Tauschflag
	// Tauschschleife
	do
	{
		// Tauschflag loeschen
		changed = false;
		// Alle Elemente vergleichen
		for (int index=0; index<noOfValues-1; index++)
		{
			// Falls getauscht werden muss
			if (pValues[index]>pValues[index+1])
			{
				// Werte tauschen
				Swap(pValues[index],pValues[index+1]);
				// Tauschflag setzen
				changed = true;
			}
		}
	} while (changed);
	// Schleife so lange durchlaufen, bis nicht mehr getauscht wurde
}
//
// HAUPTPROGRAMM
// =============
int main(){

	long    longArray[] = {1,-10,-2,20};
	double  doubleArray[] = {1.1f, 0.9f, -1.2f, 5.5f};
	cout<< "\n\nunsortiert long: "<<endl;
	for (int i=0; i < 4; i++)
		cout << longArray[i] << ", " ;

	cout<< "\n\nunsortiert double: "<<endl;
	for (int i=0; i < 4; i++)
		cout << doubleArray[i] << ", " ;

	Sort<long*>(longArray, 4);
	Sort<double*>(doubleArray, 4);

	cout<< "\n\nsortiert long: "<<endl;
	for (int i=0; i < 4; i++)
		cout << longArray[i] << ", " ;
	cout<< "\n\nsortiert double: "<<endl;
	for (int i=0; i < 4; i++)
		cout << doubleArray[i] << ", " ;
	cout << endl<<endl;
	return 0;
}
