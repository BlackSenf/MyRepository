/*
 ============================================================================
 Name        : XXX001_fibonacci.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fib (int n)
{
	if (n == 0 || n == 1) return n;

	else
	{
		return (fib(n-1)+fib(n-2));
	}
}



int main(void) {

	puts("!Copyright by Big O!");
	int a = fib(6);

	printf("%i", a);
	fflush(stdout);

	return 0;
}
