/*
 * QS_FlipFlop.h
 *
 *  CQeated on: 27.02.2013
 *      AuthoQ: Lukas
 */

#ifndef RS_FLIPFLOP_H_
#define RS_FLIPFLOP_H_

namespace std {

class RS_FlipFlop {
private:
	bool Q, Q_;
	bool R,S;

public:
	RS_FlipFlop();
	virtual ~RS_FlipFlop();

	bool getQ();
	bool getQ_();

	void setR(bool);
	void setS(bool);

};

}

#endif /* RS_FLIPFLOP_H_ */
