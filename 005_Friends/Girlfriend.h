/*
 * Girlfriend.h
 *
 *  Created on: 03.10.2012
 *      Author: Lukas
 */
#include <string>
#include "Friend.h"

#ifndef GIRLFRIEND_H_
#define GIRLFRIEND_H_



namespace std {

class Girlfriend: public std::Friend {
private:
	string bikiniszize;

public:
	Girlfriend();
	virtual ~Girlfriend();
	void setbikinisize(string);
	string getbikinisize();
	void tellme();
	void next();
};

}

#endif /* GIRLFRIEND_H_ */
