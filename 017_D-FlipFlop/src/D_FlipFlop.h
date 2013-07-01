/*
 * D_FlipFlop.h
 *
 *  Created on: 01.03.2013
 *      Author: Lukas
 */

#ifndef D_FLIPFLOP_H_
#define D_FLIPFLOP_H_

namespace std {

class D_FlipFlop {
private:
	bool Q;
	bool Q_;
	bool Clk;
	bool D;
public:
	D_FlipFlop();
	virtual ~D_FlipFlop();

	bool getQ();
	bool getQ_();

	void setD(bool);
	void setClk(bool);
};

}

#endif /* D_FLIPFLOP_H_ */
