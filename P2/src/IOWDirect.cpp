/*
 * IOWDirect.cpp
 *
 *  Created on: 24.04.2013
 *      Author: Lukas
 */
#include "IOWDirect.h"
#include "stdafx.h"
#include "iowkit.h"

namespace std {

IOWDirect::IOWDirect()
{
	//Initialisierung
	iow = IowKitOpenDevice();
	WCHAR sn[9];
	IowKitGetSerialNumber(iow, sn);
	printf("PID %x, S/N \"%ws\"\n\n", IowKitGetProductId(iow), sn);
	fflush(stdout);
}

IOWDirect::~IOWDirect()
{
	IowKitCloseDevice(IOWDirect::iow);
}

void IOWDirect::out(int i)
{
	//Hochzählen der Variable
	IOWDirect::value = 0;
	IOWDirect::value = IOWDirect::value +i;

	//Ausgabe auf den IO Warrior
	IOWKIT24_IO_REPORT rep;
	memset(&rep, 0, 3);
	rep.Value = value;
	IowKitWrite(iow, 0, (PCHAR) &rep, 3);
}

}
