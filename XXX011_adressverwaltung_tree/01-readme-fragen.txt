﻿TINU-baeume-adb2
------------------------------------------------------------------

1. _______________________________________________________________
Bringen Sie das Programm test_adb2.c zum Laufen.


2. _______________________________________________________________
Beantworten Sie folgende Fragen:

(2) Beschreiben Sie den Aufbau eines Knotens eines Binären Suchbaumes

(2) Beschreiben Sie das Einfügen in einen Binären Suchbaum.

(2) Vervollständigen Sie folg. Programmcode:
	BinSearchTree search (ADB_RECORD* key, BinSearchTree root){
		if (root == NULL)
			return NULL;
		else if (strcmp (key->nickname,root->key.nickname) == 0)
			return root;
		else if (strcmp (key->nickname,root->key.nickname) < 0)
			return search (key, Left);
		else
			return search (key, Right);
	}

(2) Rekursion bei Datenstrukturen und Algorithmen.

3. _______________________________________________________________
   Gegeben sei folg. Zahlenfolge: 3 6 9 2 1 7 4 5
   
   a) (2) Zeigen Sie den Bin-Suchbaum, der entsteht, wenn obige 
          Zahlenfolge eingegeben wird.
          
   b) (2) Geben Sie diesen Baum in postorder notation aus.

   c) (4) Vervollständigen Sie folgendes Programm:
      void postorder (BNODE* ptr) { ???? }

4. _______________________________________________________________
Sie sollen eine kleine Anwendung  zur Verwaltung von
Krankmeldungen schreiben. Gespeichert wird: 
	PersonenNummer, Begindatum, Dauer, Grund
Es werden pro Jahr ca. 500 Einträge erwartet.

(4) a) Beschreiben Sie die in Frage kommenden Datenstrukturen und 
		Algorithmen und
(4)	b) begründen Sie ihre Wahl und geben Sie an mit welchen
		Vorteilen und Nachteilen Sie rechnen müssen.
	