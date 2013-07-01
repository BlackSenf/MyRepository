/*
 * RS.h
 *
 *  Created on: 20.03.2013
 *      Author: Lukas
 */

#ifndef RS_H_
#define RS_H_

namespace std {

class RS {
private:
	bool R,S;
	bool Q, Q_;
	bool D, Clk;

public:
	RS();
	virtual ~RS();

	bool getQ();
	bool getQ_();

	void setR(bool);
	void setS(bool);

	void setD(bool);
	void setClk(bool);

};

}

#endif /* RS_H_ */

/*
 * R S D Clk Q Q_
 * 0 0 0 1   1 1
 * 0 1 0 1   0 1
 * 0 1 1 1   0 1
 * 0 1 1 0   0 1
 * 1 1 1 0   0 1
 * 1 1 1 1   1 0
 * 1 1 0 1   1 0
 * 1 1 0 0   1 0
 * 0 1 0 0   0 1
 * 0 1 1 0   0 1
 * 1 1 1 0   0 1
 * 1 1 1 1   1 0
 * 0 1 1 1   0 1
 */
