/*
 * Oberklasse.h
 *
 *  Created on: 05.12.2012
 *      Author: Lukas
 */

#ifndef OBERKLASSE_H_
#define OBERKLASSE_H_

using namespace std;
#include <iostream>
#include "ToplevelKlasse.h"

namespace std {

class Oberklasse:public ToplevelKlasse {
private:
	int privateVariableOberklasse;
	void privateMethodOberklasse();
public:
	Oberklasse();
	virtual ~Oberklasse();
	int publicVariableOberklasse;
	void publicMethodOberklasse();
	virtual void Schnittstelle();
protected:
	int protectedVariableOberklasse;
	void protectedMethodOberklasse();
};

} /* namespace std */
#endif /* OBERKLASSE_H_ */
