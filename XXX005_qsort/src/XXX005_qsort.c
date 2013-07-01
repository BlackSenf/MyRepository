/*
 ============================================================================
 Name        : XXX005_qsort.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   : My CP is my CP!
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmp_int(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int cmp_char(const void *a, const void *b) {
	const char *a1= (const char*) a;
	const char *b1= (const char*) b;

	return strcmp(a1,b1);
}

int cmp_ptr(const void *a, const void *b)
{
	const char **ia = (const char**) a;
	const char **ib = (const char**) b;
	return strcmp(*ia,*ib);
}

int main(void) {
	puts("CP by Oehli");

	int i;
	int ia[]= {34,0,-23,2,11,3,-1,9};
	char char_2dim[10][50]={"John","Jane","Mary","Rogery","Dave","Paul","Beavis","Astro","George","Elroy"};
	char *char_ptr[50]={"John","Jane","Mary","Rogery","Dave","Paul","Beavis","Astro","George","Elroy"};

	////////////////////////////////////////////
	qsort(ia,8,sizeof(int),cmp_int);
	for (i = 0; i < 8; i++)
	{
		printf (" Element: %d\n", ia[i]);
		fflush(stdout);
	}
	////////////////////////////////////////////
	qsort(char_2dim,10,50,cmp_char);
	for (i = 0; i < 10; i++)
	{
		printf (" Element: %s\n", char_2dim[i]);
		fflush(stdout);
	}
	////////////////////////////////////////////
	qsort(char_ptr,10,sizeof(char*),cmp_ptr);
	for (i = 0; i < 10; i++)
	{
		printf (" Element: %s\n", char_ptr[i]);
		fflush(stdout);
	}

	return 0;
}
