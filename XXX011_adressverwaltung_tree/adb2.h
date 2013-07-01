// a.hofmann sept. 2002
// adb2.h
// AdressbuchVerwaltung
//
#include <stdio.h>

// --------------- MAKROS und TYPVereinbarungen ----------------
#define MAXLINE 128                     //Max. Laenge einer Zeile (nickname,email,comment)
#define MAXELEMENTS 1024                //Max. Anzahl v. datensaetzen
#define MAXFILE 128                     // MAx. laenge eiens Dateinamens


//1. Datensatz definieren
typedef struct	{
	char nickname[MAXLINE];
	char email[MAXLINE];
	char comment[MAXLINE];
	} ADB_RECORD;                         // TYP: Record des Datensatzes


// --------------- Funktionen Interface -----------------------------
/**
 * oeffnet die Email-Adressdatenbankdatei
 * und fuegt die datensaetze in den Bin.Suchbaum ein
 * @param filename
 * @return -1 Fehler bzw. 1 OK
 */
int adb_open (const char * filename);

/**
 * gibt eine Liste {nickname :: emailadresse CRLF} auf FILE* aus
 * @param fp
 * @return void
 */
void adb_list (FILE *fp);


/**
 * gibt die entsprechende email-adresse aus
 * @param nickname, email
 * @return NULL Fehler; email OK
 */
char* adb_get_email (const char* nickname, char* email);
