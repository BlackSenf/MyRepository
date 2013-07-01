/*
 * Bruch.h
 *
 *  Created on: 10.01.2013
 *      Author: Lukas
 */

#ifndef BRUCH_H_
#define BRUCH_H_

namespace std {

class Bruch {
private:
	long bruch_z;
	long bruch_n;
public:
	Bruch();
	Bruch(long bruch_z,long bruch_n);
	virtual ~Bruch();
	long getBruch_z();
	long getBruch_n();
	void setBruch(long bruch_z,long bruch_n);
	void Bruch_division(Bruch a,Bruch b);
	void Bruch_multipl(Bruch a, Bruch b);
	void Bruch_minus(Bruch a, Bruch b);
	void Bruch_plus(Bruch a, Bruch b);
	long ggT(long a, long b);
	bool excp;
};

} /* namespace std */
#endif /* BRUCH_H_ */
