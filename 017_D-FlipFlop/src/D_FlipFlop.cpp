/*
 * D_FlipFlop.cpp
 *
 *  Created on: 01.03.2013
 *      Author: Lukas
 */

#include "D_FlipFlop.h"

namespace std {

D_FlipFlop::D_FlipFlop() {
	D_FlipFlop::Clk = 0;
	D_FlipFlop::D = 0;
	D_FlipFlop::Q = 0;
	D_FlipFlop::Q_ = 0;

}

D_FlipFlop::~D_FlipFlop()
{
}

bool D_FlipFlop::getQ()
{
	return D_FlipFlop::Q;
}

bool D_FlipFlop::getQ_()
{
	return D_FlipFlop::Q_;
}

void D_FlipFlop::setD(bool d)
{
	D_FlipFlop::D = d;
}

void D_FlipFlop::setClk(bool clk)
{
	if(D_FlipFlop::Clk == 0 && clk == 1)
	{
		D_FlipFlop::Q = D_FlipFlop::D;
		D_FlipFlop::Q_ = !(D_FlipFlop::D);
	}
	else
	{
		D_FlipFlop::Q = D_FlipFlop::Q ;
		D_FlipFlop::Q_ = D_FlipFlop::Q_;
	}

}

}
