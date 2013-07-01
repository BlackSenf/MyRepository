/*
 * gatterE1.h
 *
 *  Created on: 24.10.2012
 *      Author: Lukas
 */
#ifndef GATTERE1_H_
#define GATTERE1_H_

class GatterE1 {
private:
	bool e1; //Datenkapselung
public:
	void setE1(bool);
	bool getResult();
protected:
	GatterE1(bool);
	virtual ~GatterE1();
	bool getE1();
};

#endif /* GATTERE1_H_ */
