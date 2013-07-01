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
	for (j = 0; j < 256; j++)
	{
		io.out(j);
		Sleep(1000);
	}

	return 0;
}
