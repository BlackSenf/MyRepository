/*
 ============================================================================
 Name        : XXX008_structRecBsearch.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   : My CP is my CP!
 Description :
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int persnr;
	char name[80];
} TPERSON;

int comp(const void *a, const void *b)
{
	const TPERSON* a1 = (const TPERSON*) a;
	const TPERSON* b1 = (const TPERSON*) b;

	return strcmp(a1->name,b1->name);
}

TPERSON* structRecBsearchName(TPERSON* key, TPERSON* a, int left, int right)
{
	int mitte = (right + left)/2;
	if(right < left)
	{
		return 0;
	}
	else if(right == left)
	{
		return a;
	}

	if(a > key)
	{
		structRecBsearchName(key,a,left,mitte);
	}
	else if(a < key)
	{
		structRecBsearchName(key,a,mitte,right);
	}
	else if(a == key)
	{
		printf("YOLO!");
		return a;
	}


}

int main(void) {
	puts("CP by Oehli");

	TPERSON *p;

	TPERSON wir[5]= {
			{23, "Geher"},
			{3, "Singer"},
			{23, "Bierer"},
			{-23, "Maurer"},
			{93, "Ziegler"}
	};

	TPERSON suchen = {23,"Bierer"};

	qsort(wir, 5, sizeof(TPERSON),comp);

	int i;
	for(i =0; i<5; i++)
	{
		printf("%i;%s\n",wir[i].persnr, wir[i].name);
		fflush(stdout);
	}

p = structRecBsearchName(&suchen,wir,0,4);



	printf("%i;%s\n",p->persnr,p->name);
	fflush(stdout);


	return 0;
}


