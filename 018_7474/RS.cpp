/*
 * RS.cpp
 *
 *  Created on: 20.03.2013
 *      Author: Lukas
 */

#include "RS.h"

namespace std {

RS::RS()
{
	RS::Q = false;
	RS::Q_ = false;
	RS::R = false;
	RS::S = false;
	RS::D = false;
	RS::Clk = false;
}

RS::~RS()
{
}

void RS::setS(bool s)
{
	RS::S = s;

	if(RS::R == false && RS::S == true)
	{
		RS::Q_ = true;
		RS::Q = false;
	}
	else if(RS::R == true && RS::S == false)
	{
		RS::Q_ = false;
		RS::Q = true;
	}
	else if(RS::R == false && RS::R == false)
	{
		RS::Q_ = true;
		RS::Q = true;
	}
	else
	{
		RS::Q_ = RS::Q_;
		RS::Q = RS::Q;
	}
}

void RS::setR(bool r)
{
	RS::R = r;

	if(RS::R == false && RS::S == true)
	{
		RS::Q_ = true;
		RS::Q = false;
	}
	else if(RS::R == true && RS::S == false)
	{
		RS::Q_ = false;
		RS::Q = true;
	}
	else if(RS::R == false && RS::R == false)
	{
		RS::Q_ = true;
		RS::Q = true;
	}
	else
	{
		RS::Q_ = RS::Q_;
		RS::Q = RS::Q;
	}
}

void RS::setD(bool d)
{
	RS::D = d;
}
void RS::setClk(bool clk)
{
	if((RS::R && RS::S) == 1)
	{
		if(RS::Clk == 0 && clk == 1)
		{
			RS::Q = RS::D;
			RS::Q_ = !(RS::D);
		}
		else
		{
			RS::Q = RS::Q ;
			RS::Q_ = RS::Q_;
		}
	}
}


bool RS::getQ()
{
	return RS::Q;
}

bool RS::getQ_()
{
	return RS::Q_;
}

}
