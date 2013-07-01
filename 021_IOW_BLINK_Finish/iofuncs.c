/*-----------------------------------------
Project: 033_IOW_Blink_function.c
Klasse: 3CHELI
Datum: 19.03.2012
Autor: Lukas Öhlinger
Copyright by Lukas Öhlinger
-------------------------------------------*/
#include "ioblink.h"
#include "iofuncs.h"
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////

int init() {

	if (iow == NULL) {
		iow = IowKitOpenDevice();

		if (iow == NULL) {
			printf("No device!\n");
			fflush(stdout);
			return 2;
		} else {
			WCHAR sn[9];
			IowKitGetSerialNumber(iow, sn);
			printf("PID %x, S/N \"%ws\"\n\n", IowKitGetProductId(iow), sn);
			fflush(stdout);

			return 1;
		} //else
	} else {
		IowKitCloseDevice(iow);
		return 0;
	} //else

} //init

////////////////////////////////////////////////////////////////////////////////////////

void write(WORD value) {

	IOWKIT24_IO_REPORT rep;
	memset(&rep, 0, 3);
	//~ rep.ReportID = 0;

	rep.Value = value;
	IowKitWrite(iow, 0, (PCHAR) &rep, 3);

} //write

////////////////////////////////////////////////////////////////////////////////////////

void write2(WORD wert1, WORD wert2) {

	write((wert1 << 8)+wert2);
}
