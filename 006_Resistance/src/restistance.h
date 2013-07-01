/*
 * restistance.h
 *
 *  Created on: 17.10.2012
 *      Author: Lukas
 */

#ifndef RESTISTANCE_H_
#define RESTISTANCE_H_
#include <string>

namespace std {

class restistance {
private:
	double r;
	bool first;

public:
	restistance();
	virtual ~restistance();
	double parallel(double);
	double seriell(double);
};

}

#endif /* RESTISTANCE_H_ */
