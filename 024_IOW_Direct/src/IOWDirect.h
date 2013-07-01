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

enum mode{immediate, flushi};

class IOWDirect {
private:
	IOWKIT_HANDLE iow;
	WORD value;
	WORD memory;
	enum mode m;
public:
	IOWDirect();
	IOWDirect(enum mode m);
	virtual ~IOWDirect();

	void out(int);

	void setBit(int);
	void toggleBit(int);
	void setAll();
	void toggleAll();
	void transmit();
};

}

#endif /* IOWDIRECT_H_ */
