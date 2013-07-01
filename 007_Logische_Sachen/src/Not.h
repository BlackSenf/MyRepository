/*
 * Not.h
 *
 *  Created on: 24.10.2012
 *      Author: Lukas
 */
#ifndef NOT_H_
#define NOT_H_

#include "GatterE1.h"

class Not: public GatterE1 {
public:
	Not();
	Not(bool);
	virtual ~Not();
	bool getResult();
};

#endif /* NOT_H_ */
