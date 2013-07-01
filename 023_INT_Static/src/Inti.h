/*
 * Inti.h
 *
 *  Created on: 15.05.2013
 *      Author: Lukas
 */

#ifndef INTI_H_
#define INTI_H_

namespace std {

class Inti {
public:
	Inti();
	Inti(int);
	virtual ~Inti();
	int getMax();
	int getMin();
	int getAnzahl();

private:
	int intg;
	static int max, min, anzahl;
};

}

#endif /* INTI_H_ */
