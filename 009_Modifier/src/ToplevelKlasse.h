/*
 * ToplevelKlasse.h
 *
 *  Created on: 09.01.2013
 *      Author: Lukas
 */

#ifndef TOPLEVELKLASSE_H_
#define TOPLEVELKLASSE_H_

namespace std {

class ToplevelKlasse {
public:
	ToplevelKlasse();
	virtual ~ToplevelKlasse();
	virtual void Schnittstelle() = 0; //bestes Eclipse-Verhalten, wenn die Methode in der .cpp Datei fehlt
};

}

#endif /* TOPLEVELKLASSE_H_ */
