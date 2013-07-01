/*
 ============================================================================
 Name        : XXX006_qsort-struct.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   : My CP is my CP!
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp_ia(const void *a,const void *b);
int comp_char2dim(const void *a, const void *b);

typedef struct {
  int persnr;
  char name[80];
} TPERSON;

int main(int argc, char *argv[])
{
    TPERSON* wir;

    int i,anzahl;

    scanf("%i", &anzahl);

    wir = (TPERSON*) malloc(sizeof(TPERSON)*anzahl);

    for (i=0; i<anzahl; i++)
    {
    	fflush(stdin);
        scanf("%i", &wir[i].persnr);
        scanf("%s", &wir[i].name);
    }

    printf("Unsortierte Ausgabe:\n");
    for (i=0; i< anzahl; i++)
    {
        printf("PERSON: Personal-Nr: %i Name: %s\n", wir[i].persnr, wir[i].name);
    }

    qsort((void*) wir, anzahl, sizeof(TPERSON), comp_ia);
    printf("Sortiert nach Personal-Nr:\n");
    for (i=0; i< anzahl; i++)
    {
        printf("PERSON: Personal-Nr: %i Name: %s\n", wir[i].persnr, wir[i].name);
    }

    qsort((void*) wir, anzahl, sizeof(TPERSON), comp_char2dim);
    printf("Sortiert nach Name:\n");
    for (i=0; i< anzahl; i++)
    {
        printf("PERSON: Personal-Nr: %i Name: %s\n", wir[i].persnr, wir[i].name);
    }

    return 0;
}

int comp_ia(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}

int comp_char2dim(const void *a, const void *b)
{
    const TPERSON* a1 = (const TPERSON*) a;
    const TPERSON* b1 = (const TPERSON*) b;

    return strcmp(a1->name,b1->name);
}
