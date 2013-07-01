/*
 * Dreieck.h
 *
 *  Created on: 15.05.2013
 *      Author: Lukas
 */

#ifndef DREIECK_H_
#define DREIECK_H_

namespace std {

class Dreieck {
private:
	double x1,x2,x3,y1,y2,y3;
	static int number; //Anzahl der verwendeten Dreiecke
public:
	Dreieck();
	virtual ~Dreieck();

	int getNumber();
};

}

#endif /* DREIECK_H_ */
