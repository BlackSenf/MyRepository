/*
 * Add.h
 *
 *  Created on: 26.09.2012
 *      Author: Lukas
 */

#ifndef ADD_H_
#define ADD_H_

class Add {

private:
	double z1;
	double z2;

public:
	Add();
	virtual ~Add();
	void set_z1(double);
	void set_z2(double);
	double calculate();

};

#endif /* ADD_H_ */
