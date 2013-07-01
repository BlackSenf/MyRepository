//============================================================================
// Name        : P2.cpp
// Author      : Lukas Oehlinger
// Version     :
// Copyright   : My CP is my CP!
// Description : IOW Programm
//============================================================================

#include <iostream>
#include "IOWDirect.h"
#include "stdafx.h"
#include "time.h"
#include "iowkit.h"

using namespace std;

int main() {
	cout << "CP by Lukas Oehlinger" << endl;

	IOWDirect io;

	int j;
	for (j = 0; j < 5; j++)
	{
		io.out(j);
		Sleep(1000);
	}

	IOWDirect io1 = IOWDirect(flushi);

	io1.setAll();
	io1.transmit();

	Sleep(1000);

	io1.toggleBit(4);
	io1.transmit();

	Sleep(1000);

	io1.setBit(4);
	io1.transmit();

	Sleep(1000);

	io1.toggleAll();
	io1.transmit();

	Sleep(1000);

	try{
		io1.out(10);
	}
	catch(const char* msg)
	{
		cout << msg << endl;
	}

	return 0;
}
