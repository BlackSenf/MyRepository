/*
 * Kreis.h
 *
 *  Created on: 12.12.2012
 *      Author: Lukas
 */

#ifndef KREIS_H_
#define KREIS_H_

#include "Flaechenform.h"
#include <iostream>

namespace std {

class Kreis: public std::Flaechenform {
private:
	double r1;
public:
	Kreis();
	virtual ~Kreis();
	void setR1(double);
	virtual double getResult();
protected:
	double getR1();
};

}
#endif /* KREIS_H_ */
