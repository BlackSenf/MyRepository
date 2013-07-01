/*
 ============================================================================
 Name        : XXX002_klassenliste.c
 Author      : Lukas Oehlinger
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Struct Dekalartion
struct Entry
{
	int nummer;
	char vorname[30];
	char nachname[30];
	struct tm geburtstag;
};

//Sortier Deklaration
int compare(const void *a, const void *b)
{
	struct Entry *ia = (struct Entry *) a;
	struct Entry *ib = (struct Entry *) b;
	return strcmp(ia->vorname, ib->vorname);
}

int main(void)
{
	//Deklerationen
	FILE *quelle;
	char puffer[50];
	struct Entry entries[50];
	int i = 0;

	//Abfrage ob Datei vorhanden ist
	if ((quelle = fopen("liste.txt", "r")) == NULL)
	{
		fprintf(stderr, "Kann Datei nicht oeffnen\n");
		return EXIT_FAILURE;
	}



	while (fgets(puffer, 50, quelle))
	{
		//Nummer, Name und Vorname ins Struct schreiben
		struct Entry entry;

		entry.nummer = atoi(strtok(puffer, ";"));

		strcpy(entry.nachname, strtok(NULL, ";"));

		strcpy(entry.vorname, strtok(NULL, ";"));

		//Zeit formatierung udn danach isn Struct schreiben
		char temp[30];
		strcpy(temp, strtok(NULL, ";"));

		entry.geburtstag.tm_mday = atoi(strtok(temp, "."));
		entry.geburtstag.tm_mon = atoi(strtok(NULL, ".")) - 1;
		entry.geburtstag.tm_year = atoi(strtok(NULL, ".")) - 1900;

		strftime(temp, 10, "%x", &entry.geburtstag);
		entries[i] = entry;
		i++;
	}

	int j;

	//Sortierung
	qsort(entries, i + 1, sizeof(struct Entry), compare);

	//Ausgabe
	for (j = 0; j < i; j++)
	{
		char temp[30];

		strftime(temp, 10, "%x", &entries[j].geburtstag);

		printf("nummer: %d vorname: %s nachname: %s geburtstag: %s\n",
				entries[j].nummer, entries[j].vorname, entries[j].nachname,
				temp);
	}

	return 0;
}
