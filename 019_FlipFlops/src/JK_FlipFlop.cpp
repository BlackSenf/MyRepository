/*
 * D_FlipFlop.cpp
 *
 *  Created on: 01.03.2013
 *      Author: Lukas
 */

#include "JK_FlipFlop.h"

namespace std {

JK_FlipFlop::JK_FlipFlop() {
	JK_FlipFlop::Clk = 0;
	JK_FlipFlop::J = 0;
	JK_FlipFlop::K = 0;
	JK_FlipFlop::Q = 0;
	JK_FlipFlop::Q_ = 0;

}

JK_FlipFlop::~JK_FlipFlop()
{
}

bool JK_FlipFlop::getQ()
{
	return JK_FlipFlop::Q;
}

bool JK_FlipFlop::getQ_()
{
	return JK_FlipFlop::Q_;
}

void JK_FlipFlop::setJ(bool j)
{
	JK_FlipFlop::J = j;
}

void JK_FlipFlop::setK(bool k)
{
	JK_FlipFlop::K = k;
}

void JK_FlipFlop::setClk(bool clk)
{

	if(JK_FlipFlop::Clk == 0 && clk == 1)
	{
		if(JK_FlipFlop::J == 0 && JK_FlipFlop::K == 0)
		{
			JK_FlipFlop::Q = 0;
			JK_FlipFlop::Q_ = 0;
		}
		else if(JK_FlipFlop::J == 0 && JK_FlipFlop::K == 1)
		{
			JK_FlipFlop::Q = 0;
			JK_FlipFlop::Q_ = 1;
		}
		else if(JK_FlipFlop::J == 1 && JK_FlipFlop::K == 0)
		{
			JK_FlipFlop::Q = 1;
			JK_FlipFlop::Q_ = 0;
		}
		else if(JK_FlipFlop::J == 1 && JK_FlipFlop::K == 1)
		{
			JK_FlipFlop::Q = !JK_FlipFlop::Q;
			JK_FlipFlop::Q_ = !JK_FlipFlop::Q_;
		}


	}
	else
	{
		JK_FlipFlop::Q = JK_FlipFlop::Q ;
		JK_FlipFlop::Q_ = JK_FlipFlop::Q_;
	}

}

}
