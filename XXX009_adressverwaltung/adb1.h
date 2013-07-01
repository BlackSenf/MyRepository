#ifndef __ADB_H__
#define __ADB_H__

#define MAXNICK		1024
#define	MAXEMAIL	1024
#define	MAXCOMMENT	1024

typedef struct {
	char	nick[MAXNICK];
	size_t	offset;
} INDEX;

typedef struct {
	char	nick[MAXNICK];
	char	email[MAXEMAIL];
	char	comment[MAXCOMMENT];
} ENTRY;

unsigned int load_table(FILE* in, INDEX** list);
void load_entry(const INDEX* index, ENTRY* out, FILE* in);
void free_table(INDEX** list);

INDEX* find_nick(const char* nick, INDEX* list, unsigned int count);

#endif
