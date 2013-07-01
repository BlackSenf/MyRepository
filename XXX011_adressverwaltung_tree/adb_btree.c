// a.hofmann sept. 2002
// adb_btree.c
// AdressbuchVerwaltung miitles Binärem Suchbaum
//

#include <stdlib.h>
#include <string.h>

#include "adb_btree.h"

// lokale Hilfsfunktion
// -------------------------------------------------------------
static BNODE* make_node (ADB_RECORD* key){
	BNODE* ptr;

	ptr = (BNODE*) malloc (sizeof(key));
	if (ptr != NULL){
		strcpy (ptr->key.nickname, 	key->nickname);
		strcpy (ptr->key.email, 	key->email);
		strcpy (ptr->key.comment, 	key->comment);

		// Blatt, d.h. li,re sind leer
		ptr->Left= ptr->Right= NULL;
	}
	return ptr;
}


// oeffentliche Funktionen
// -------------------------------------------------------------
void inorder ( BinSearchTree ptr, FILE *stream){

	if (ptr){
		printf("Test");
		inorder (ptr->Left, stream);

		fprintf (stream, "...\n<%s>\n<%s>\n<%s>\n", ptr->key.nickname,ptr->key.email,ptr->key.comment);

		inorder (ptr->Right, stream);
	}
}

void postorder (BinSearchTree root, FILE *stream){
	// hier nicht gebraucht
}

void preorder (BinSearchTree root, FILE *stream){
	// hier nicht gebraucht
}


// -------------------------------------------------------------
BinSearchTree search (ADB_RECORD* key, BinSearchTree root){
	if (root == NULL)
		return NULL;
	else if (strcmp (key->nickname,root->key.nickname) == 0)
		return root;
	else if (strcmp (key->nickname,root->key.nickname) < 0)
		return search (key, root->Left);
	else
		return search (key, root->Right);
}


// -------------------------------------------------------------
BinSearchTree insert (ADB_RECORD* key, BinSearchTree* root) {
	BinSearchTree curr= *root;
	BinSearchTree prev= *root;

	// 1. Wenn Baum leer ist
	if (*root == NULL)
	{
		*root = make_node(key);
		return *root;
	}

	//2. Suche Platz zum Einfuegen
	while (curr != NULL){
		prev= curr;
		if (strcmp(key->nickname,curr->key.nickname) > 0)
			curr= curr->Right;
		else if ( strcmp(key->nickname,curr->key.nickname) < 0)
			curr= curr->Left;
		else //Element bereits vorhanden
			return NULL;
	}

	//3. Bei prev einfuegen
	if (strcmp(key->nickname, prev->key.nickname) > 0){
		prev->Right= make_node(key);
		return prev->Right;
	}
	else{
		prev->Left= make_node(key);
		return prev->Left;
	}
}


// -------------------------------------------------------------
void delete (ADB_RECORD* key, BinSearchTree *root){
	// wird hier nicht besprochen
}

