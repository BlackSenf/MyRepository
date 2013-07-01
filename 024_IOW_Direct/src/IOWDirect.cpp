/*
 * IOWDirect.cpp
 *
 *  Created on: 24.04.2013
 *      Author: Lukas
 */
#include "IOWDirect.h"
#include "stdafx.h"
#include "iowkit.h"

bool modis;

namespace std {

IOWDirect::IOWDirect(enum mode m)
{
	IOWDirect::m = m;

	//Initialisierung
	iow = IowKitOpenDevice();
	WCHAR sn[9];
	IowKitGetSerialNumber(iow, sn);
	printf("PID %x, S/N \"%ws\"\n\n", IowKitGetProductId(iow), sn);
	fflush(stdout);
}

IOWDirect::IOWDirect()
{
	IOWDirect::m = immediate;
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
	if(IOWDirect::m == flushi)
	{
		throw "FEHLER! Falscher Modus!";
	}

	//Hochzählen der Variable
	IOWDirect::value = 0;
	IOWDirect::value = IOWDirect::value +i;

	//Ausgabe auf den IO Warrior
	IOWKIT24_IO_REPORT rep;
	memset(&rep, 0, 3);
	rep.Value = value;
	IowKitWrite(iow, 0, (PCHAR) &rep, 3);
}


void IOWDirect::setBit(int nr)
{
	if(IOWDirect::m == immediate)
	{
		throw "FEHLER! Falscher Modus!";
	}

	if(nr > 0 && nr <= 7)
	{
		IOWDirect::memory |= (1<<nr);
	}
}

void IOWDirect::toggleBit(int nr)
{
	if(IOWDirect::m == immediate)
	{
		throw "FEHLER! Falscher Modus!";
	}

	if(nr > 0 && nr <= 7)
	{
		IOWDirect::memory &= ~(1<<nr);
	}
}

void IOWDirect::setAll()
{
	if(IOWDirect::m == immediate)
	{
		throw "FEHLER! Falscher Modus!";
	}

	IOWDirect::memory = 0xFF;
}

void IOWDirect::toggleAll()
{
	if(IOWDirect::m == immediate)
	{
		throw "FEHLER! Falscher Modus!";
	}

	IOWDirect::memory = 0x00;
}

void IOWDirect::transmit()
{
	if(IOWDirect::m == immediate)
	{
		throw "FEHLER! Falscher Modus!";
	}

	//Ausgabe auf den IO Warrior
	IOWKIT24_IO_REPORT rep;
	memset(&rep, 0, 3);
	rep.Value = IOWDirect::memory;
	IowKitWrite(iow, 0, (PCHAR) &rep, 3);
}

}
