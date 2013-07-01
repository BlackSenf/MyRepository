/*
 ============================================================================
 Name        : XXX003_intBubbleSort.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int *array, int length)
{
	int i, j;
	for (i = 0; i < length -1; ++i)
	{
		for (j = 0; j < length - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

int main(void) {
	puts("CP by Oehli");


	int *array,anzahl;
	srand(time(NULL));


	fflush(stdin);
	scanf ("%i", &anzahl);

	array = (int *) malloc(anzahl * sizeof(int));

	int i;
	int j;

	for(i = 0; i < anzahl; i++)
	{
		array[i] = rand() % 1000 + 1;

	}

	for (j = 0; j < anzahl;j++)
	{
		printf (" Element: %d\n", array [j]);
		fflush(stdout);
	}

	bubblesort(array,anzahl);

	for (j = 0; j < anzahl;j++)
	{
		printf (" Element: %d\n", array [j]);
		fflush(stdout);
	}

	free(array);
	return 0;
}
