//
// ioblink.cpp - Blinking LEDs sample
//
#include <stdio.h>
#include "stdafx.h"
#include "time.h"
#include "iowkit.h"

// Write simple value
BOOLEAN WriteSimple(IOWKIT_HANDLE devHandle, DWORD value)
{
	IOWKIT56_IO_REPORT rep;

	// Init report
	memset(&rep, 0xff, IOWKIT56_IO_REPORT_SIZE);
	rep.ReportID = 0;
	switch (IowKitGetProductId(devHandle))
	{
	// Write simple value to IOW40
	case IOWKIT_PRODUCT_ID_IOW40:
		rep.Bytes[3] = (BYTE) value;
		return IowKitWrite(devHandle, IOW_PIPE_IO_PINS,
			(PCHAR) &rep, IOWKIT40_IO_REPORT_SIZE) == IOWKIT40_IO_REPORT_SIZE;
	// Write simple value to IOW24
	case IOWKIT_PRODUCT_ID_IOW24:
		rep.Bytes[0] = (BYTE) value;
		return IowKitWrite(devHandle, IOW_PIPE_IO_PINS,
			(PCHAR) &rep, IOWKIT24_IO_REPORT_SIZE) == IOWKIT24_IO_REPORT_SIZE;
	case IOWKIT_PRODUCT_ID_IOW56:
	// Write simple value to IOW56
		rep.Bytes[6] = (BYTE) value;
		return IowKitWrite(devHandle, IOW_PIPE_IO_PINS,
			(PCHAR) &rep, IOWKIT56_IO_REPORT_SIZE) == IOWKIT56_IO_REPORT_SIZE;
	default:
		return FALSE;
	}
}

int main(int argc, char* argv[])
{
	IOWKIT_HANDLE iows[IOWKIT_MAX_DEVICES];
	int i, j;
	ULONG bits;
	int numIows;
	IOWKIT56_IO_REPORT rep;
	WCHAR sn[9];
	ULONG rc;
	DWORD pid;
	IOWKIT_HANDLE devHandle;

	// Open device
	devHandle = IowKitOpenDevice();
	if (devHandle == NULL)
	{
		printf("Failed to open device\n");
		goto out;
	}
	// Get number of IOWs in system
	numIows = IowKitGetNumDevs();
	printf("%d IOWs in system\n", numIows);
	// Get all IOW handles
	for (i = 0; i < numIows; i++)
	{
		// Get device handle and init object
		iows[i] = IowKitGetDeviceHandle(i + 1);
		// Get serial number
		IowKitGetSerialNumber(iows[i], sn);
		pid = IowKitGetProductId(iows[i]);
		printf("%d PID %x, S/N \"%ws\"\n", i + 1, pid, sn);
	}
	// Init report
	// Report ID 0 is for writing to 32 input/output pins
	rep.ReportID = 0;
	printf("Blinking LEDs...\n");
	//srand(time(NULL));
	// Blinking'
	for (i = 0; i < 100; i++)
	{
		bits = rand();
		// Make every IOW blink
		for (j = 0; j < numIows; j++)
		{
			// Write to simple endpoint
			rc = WriteSimple(iows[j], bits);
			// Check for error
			if (!rc)
				printf("Cannot write, err %d\n", GetLastError());
		}
		// Sleep for 25ms
		Sleep(100);
	}
	printf("Blinking complete\n");
	// Set LEDs off
	for (i = 0; i < numIows; i++)
		// Write to simple endpoint
		WriteSimple(iows[i], 0xFFFFFFFF);
	for(i = 0; i < 10; i++)
	{

		// Read non blocking
		// Init report
		memset(&rep, 0, IOWKIT56_IO_REPORT_SIZE);
		switch (IowKitGetProductId(devHandle))
		{
			case IOWKIT_PRODUCT_ID_IOW40:
				rc = IowKitReadNonBlocking(iows[0], IOW_PIPE_IO_PINS,
					(PCHAR) &rep, IOWKIT40_IO_REPORT_SIZE);
				printf("%2d) ReadNonBl(): rc=%u bits=", i + 1, rc);
				for (j = IOWKIT40_IO_REPORT_SIZE - 1; j >= 0; j--)
					printf("%02x", rep.Bytes[j]);
				printf("\n");
				break;
			case IOWKIT_PRODUCT_ID_IOW24:
				rc = IowKitReadNonBlocking(iows[0], IOW_PIPE_IO_PINS,
					(PCHAR) &rep, IOWKIT24_IO_REPORT_SIZE);
				printf("%2d) ReadNonBl(): rc=%u bits=", i + 1, rc);
				for (j = IOWKIT24_IO_REPORT_SIZE - 1; j >= 0; j--)
					printf("%02x", rep.Bytes[j]);
				printf("\n");
				break;
			case IOWKIT_PRODUCT_ID_IOW56:
				rc = IowKitReadNonBlocking(iows[0], IOW_PIPE_IO_PINS,
					(PCHAR) &rep, IOWKIT56_IO_REPORT_SIZE);
				printf("%2d) ReadNonBl(): rc=%u bits=", i + 1, rc);
				for (j = IOWKIT56_IO_REPORT_SIZE - 1; j >= 0; j--)
					printf("%02x", rep.Bytes[j]);
				printf("\n");
				break;
		}
		Sleep(100);
	}
	// Close device
	IowKitCloseDevice(devHandle);
out:

	return 0;
}
