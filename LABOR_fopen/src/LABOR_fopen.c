/*
 ============================================================================
 Name        : LABOR_fopen.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   : My CP is my CP!
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("CP by Oehli");

	FILE *test;

	test = fopen("test.txt", "wt");

	fprintf(test, "HALLO WELT");

	fclose(test);

	return 0;
}
