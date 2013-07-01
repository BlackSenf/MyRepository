/*
 * Kreisring.h
 *
 *  Created on: 12.12.2012
 *      Author: Lukas
 */

#ifndef KREISRING_H_
#define KREISRING_H_

#include "Kreis.h"

namespace std {

class Kreisring: public std::Kreis {
private:
	double r2;
public:
	Kreisring();
	virtual ~Kreisring();
	void setR2(double);
	virtual double getResult();
protected:
	double getR2();

};

}

#endif /* KREISRING_H_ */
