/*
 * Sum.h
 *
 *  Created on: 26.09.2012
 *      Author: Lukas
 */

#ifndef SUM_H_
#define SUM_H_

class Sum {

private:
	double sum;

public:
	Sum();
	Sum(double);
	virtual ~Sum();
	void SumUp(double);
	double get_Sum();
	void increment_Sum();
	void decrement_Sum();
};

#endif /* SUM_H_ */
