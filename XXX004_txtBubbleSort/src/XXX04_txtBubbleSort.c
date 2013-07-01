/*
 ============================================================================
 Name        : XXX04_txtBubbleSort.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bubblesort2D(char txt[5][80])
{
	int i, j;
	char temp[80];

	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 5; j++)

		{
			if (strcmp(txt[i], txt[j]) > 0)
			{
				strcpy(temp, txt[i]);
				strcpy(txt[i], txt[j]);
				strcpy(txt[j], temp);
			}
		}
	}
}



int main(int argc, char *argv[])
{
	char txt[5][80];
	int i;

	for (i = 0; i < 5; i++)
	{
		gets(txt[i]);
	}


	for (i = 0; i < 5; i++)
	{
		printf("%s\n", txt[i]);

	}


	bubblesort2D(txt);


	for (i = 0; i < 5; i++)
		{
			printf("%s\n", txt[i]);

		}

	return 0;
}


