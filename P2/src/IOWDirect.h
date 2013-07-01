/*
 * IOWDirect.h
 *
 *  Created on: 24.04.2013
 *      Author: Lukas
 */
#include "stdafx.h"

#ifndef IOWDIRECT_H_
#define IOWDIRECT_H_

namespace std {

class IOWDirect {
private:
	IOWKIT_HANDLE iow;
	WORD value;
public:
	IOWDirect();
	virtual ~IOWDirect();
	void out(int);
};

}

#endif /* IOWDIRECT_H_ */
