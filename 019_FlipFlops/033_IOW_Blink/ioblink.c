/*-----------------------------------------
Project: 033_IOW_Blink
Klasse: 3CHELI
Datum: 19.03.2012
Autor: Lukas Öhlinger
Copyright by Lukas Öhlinger
-------------------------------------------*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include "ioblink.h"
#include "iofuncs.h"


////////////////////////////////////////////////////////////////////////////////////////

void blink1() {
	do {
		write(0x0F);
		Sleep(1000);
		write(0x1E);
		Sleep(1000);
		write(0x3C);
		Sleep(1000);
		write(0x78);
		Sleep(1000);
		write(0xF0);
		Sleep(1000);
		write(0x78);
		Sleep(1000);
		write(0x3C);
		Sleep(1000);
		write(0x1E);
		Sleep(1000);
	} while (!kbhit());

}

////////////////////////////////////////////////////////////////////////////////////////

int main() {

	int choice;

	if (init() != 1){
		return 1;
	}
	printf("Blink Prototype: ");
	fflush(stdout);
	scanf("%d", &choice);
	if (choice == 1)
		blink1();

	write(0x55AA);

	printf("\nDone Blinking...\n");
	if (init() != 0){
		return 1;
	}
	return 0;
}
