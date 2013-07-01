/* *
 * Datei: o_strlist.h    Hofmann Anton
 * Headerdatei fuer Typvereinbarungen.
 * Einfach verkettete Listen als ADTs.
 * */

/* -- Einfach gekettete Listen: StrukturTypen --------*/

/* -- SLIST Knoten */
struct SList {
  char *Data;
  struct SList *Next;
};
typedef struct SList  SLIST;

/* -- SLIST_HEADER Ein Kopf-Knoten mit Listenlaenge */
struct SList_Header {
  int Len;
  SLIST *First, *Last;
};
typedef struct SList_Header SLIST_HEADER;

/* -- Einfach gekettete Listen: ZUgriffsfunktionen --------*/

extern SLIST_HEADER *createSList(void);
extern SLIST *insertFirst(SLIST_HEADER*,char*);
extern SLIST *insertLast(SLIST_HEADER*,char*);
extern void  deleteFirst(SLIST_HEADER*);
extern void  deleteLast(SLIST_HEADER*);
extern void pr_SList(SLIST_HEADER*,FILE*);
extern void rm_SList(SLIST_HEADER*);
extern char *get_entrySList(SLIST_HEADER*,int);
