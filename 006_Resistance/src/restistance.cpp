/*
 * restistance.cpp
 *
 *  Created on: 17.10.2012
 *      Author: Lukas
 */

#include "restistance.h"

namespace std {

restistance::restistance() {
	first = true;
	restistance::r = 0.0;
	// TODO Auto-generated constructor stub

}

restistance::~restistance() {
	// TODO Auto-generated destructor stub
}

double restistance::parallel(double r)
{
	if(restistance::first == false)
	{
		double zwischen;
		zwischen = 1.0/(1.0/r+1.0/restistance::r);
		restistance::r = zwischen;
		return restistance::r;
	}

	if(restistance::first == true){
		restistance::first = false;
		restistance::r = r;
		return restistance::r;
	}
}

double restistance::seriell(double r)
{
	if(restistance::first == false)
	{
	double zwischen;
	zwischen = r + restistance::r;
	restistance::r = zwischen;
	return restistance::r;
	}

	if(restistance::first == true){
			restistance::first = false;
			restistance::r = r;
			return restistance::r;
		}
}
}
