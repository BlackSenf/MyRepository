/*
 * Unterklasse.h
 *
 *  Created on: 09.01.2013
 *      Author: Lukas
 */

#ifndef UNTERKLASSE_H_
#define UNTERKLASSE_H_

#include "Oberklasse.h"

namespace std {

class Unterklasse: public std::Oberklasse {

public:
	Unterklasse();
	virtual ~Unterklasse();
	void changePublicVariableofOberklasse();
	void changePrivateVariableofOberklasse();
	void changeProtectedVariableofOberklasse();



};

}

#endif /* UNTERKLASSE_H_ */
