/*
 * Boyfriend.h
 *
 *  Created on: 10.10.2012
 *      Author: Lukas
 */

#ifndef BOYFRIEND_H_
#define BOYFRIEND_H_

#include "Friend.h"
#include <string>

namespace std {

class Boyfriend: public std::Friend {
private:
	double money;

public:
	Boyfriend();
	virtual ~Boyfriend();
	void setmoney(double);
	double getmoney();
	void tellme();
	void next();
};

}

#endif /* BOYFRIEND_H_ */
