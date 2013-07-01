/*
 * Flaechenform.h
 *
 *  Created on: 12.12.2012
 *      Author: Lukas
 */

#ifndef FLAECHENFORM_H_
#define FLAECHENFORM_H_

namespace std {

class Flaechenform {
public:
	virtual double getResult();
protected:
	Flaechenform();
	virtual ~Flaechenform();
};
}
#endif /* FLAECHENFORM_H_ */
