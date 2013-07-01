/*
 * D_FlipFlop.h
 *
 *  Created on: 01.03.2013
 *      Author: Lukas
 */

#ifndef JK_FLIPFLOP_H_
#define JK_FLIPFLOP_H_

namespace std {

class JK_FlipFlop {
private:
	bool Q;
	bool Q_;
	bool Clk;
	bool J;
	bool K;
public:
	JK_FlipFlop();
	virtual ~JK_FlipFlop();

	bool getQ();
	bool getQ_();

	void setJ(bool);
	void setK(bool);
	void setClk(bool);
};

}

#endif /* JK_FLIPFLOP_H_ */

/*
 * J K Clk Q !Q
 * 0 0 0   X  X
 * 1 0 0   X  X
 * 1 0 1   1  0
 * 1 1 1   1  0
 * 1 1 0   1  0
 * 1 1 1   0  1
 * 0 1 1   0  1
 * 0 1 0   0  1
 * 0 1 1   0  1
 * 0 0 1   0  1
 * 0 0 0   0  1
 * 0 0 1   0  1
 */

