// a.hofmann 10.06
// cbank.h
// demo: klasse und objekt und container

#ifndef CBANK_H
#define CBANK_H  CBANK_H

#include "ckonto.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class CBank {
	private:
        vector<CKonto> m_konten;
		string m_name;
		
	public:
		// Konstruktoren
		CBank(string powner);

		// Methoden
		void add(const CKonto& pkonto);
		
		void display()const;

		// Friends
		friend ostream& operator<<(ostream&, const CBank&);
		
		// Destruktor
		~CBank();
};
#endif
