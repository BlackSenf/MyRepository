/*
 * RS_FlipFlop.cpp
 *
 *  Created on: 27.02.2013
 *      Author: Lukas
 */

#include "RS_FlipFlop.h"

namespace std {

RS_FlipFlop::RS_FlipFlop()
{
	RS_FlipFlop::Q = false;
	RS_FlipFlop::Q_ = false;
	RS_FlipFlop::R = false;
	RS_FlipFlop::S = false;
}

RS_FlipFlop::~RS_FlipFlop()
{
}

void RS_FlipFlop::setS(bool s)
{
	RS_FlipFlop::S = s;

	if(RS_FlipFlop::R == false && RS_FlipFlop::S == true)
	{
		RS_FlipFlop::Q_ = true;
		RS_FlipFlop::Q = false;
	}
	else if(RS_FlipFlop::R == true && RS_FlipFlop::S == false)
	{
		RS_FlipFlop::Q_ = false;
		RS_FlipFlop::Q = true;
	}
	else if(RS_FlipFlop::R == false && RS_FlipFlop::R == false)
	{
		RS_FlipFlop::Q_ = false;
		RS_FlipFlop::Q = true;
	}
	else
	{
		RS_FlipFlop::Q_ = RS_FlipFlop::Q_;
		RS_FlipFlop::Q = RS_FlipFlop::Q;
	}
}

void RS_FlipFlop::setR(bool r)
{
	RS_FlipFlop::R = r;

	if(RS_FlipFlop::R == false && RS_FlipFlop::S == true)
	{
		RS_FlipFlop::Q_ = true;
		RS_FlipFlop::Q = false;
	}
	else if(RS_FlipFlop::R == true && RS_FlipFlop::S == false)
	{
		RS_FlipFlop::Q_ = false;
		RS_FlipFlop::Q = true;
	}
	else if(RS_FlipFlop::R == false && RS_FlipFlop::R == false)
	{
		RS_FlipFlop::Q_ = false;
		RS_FlipFlop::Q = true;
	}
	else
	{
		RS_FlipFlop::Q_ = RS_FlipFlop::Q_;
		RS_FlipFlop::Q = RS_FlipFlop::Q;
	}
}

bool RS_FlipFlop::getQ()
{
	return RS_FlipFlop::Q;
}

bool RS_FlipFlop::getQ_()
{
	return RS_FlipFlop::Q_;
}

}



