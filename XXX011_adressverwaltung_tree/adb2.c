// a.hofmann sept. 2002
// adb2.c
// AdressbuchVerwaltung
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "adb_btree.h"

// Der Baum ist NUR (static) hier global
static BinSearchTree theTree;


// --------------- Funktionen Implementierung -----------------------
int adb_open (const char * filename){
	FILE* adb_fp;
	char* ret;
    ADB_RECORD aRecord;

	// --------- 1. File oeffnen (Anm.: ASCII-Datei)
	adb_fp=fopen(filename, "rt");
	if (adb_fp == NULL)
		return -1;

	// ---------  2. Datensaetze lesen und in Baum einfuegen
	do
	{
		// nickname lesen
		ret= fgets(aRecord.nickname, sizeof (aRecord.nickname), adb_fp);
		//'\n' am ende loeschen, da fgets() dies mitliest
		if (ret != NULL) aRecord.nickname[strlen (aRecord.nickname) - 1] = '\0';

		// email und comment lesen
		if (ret != NULL)
		{
		ret= fgets(aRecord.email, sizeof (aRecord.email), adb_fp);
		aRecord.email[strlen (aRecord.email) - 1] = '\0';
		}

		if (ret != NULL)
		{
		ret= fgets(aRecord.comment, sizeof (aRecord.comment), adb_fp);
		aRecord.comment[strlen (aRecord.comment) - 1] = '\0';
		}


		// in Baum einfuegen
		// ------------------
		if (ret != NULL) insert (&aRecord, &theTree);
	} while (ret != NULL);


	// datei wieder schliessen
	// wir halten alles im Baum
	fclose(adb_fp);

    return(1);
}


//gibt eine Liste {nickname :: emailadresse CRLF} auf FILE* aus
void adb_list (FILE *fp) {
	inorder (theTree, fp);
}


//gibt die entsprechende email-adresse aus
//RETURN: NULL Fehler; email OK
char* adb_get_email (const char* nickname, char* email) {
 BinSearchTree found;
 ADB_RECORD aRecord;

 strcpy(aRecord.nickname, nickname);

 //1. suchen
 found = search(&aRecord, theTree);

 if (found == NULL){
  *email ='\0';
  return NULL;
 }

 strcpy (email, found->key.email);

 return email;
}


