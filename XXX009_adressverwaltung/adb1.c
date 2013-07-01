#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#include "adb1.h"

int listsortcb(const void* a, const void* b) {
	return strcasecmp((const char*)a, (const char*)b);
}

void trim(char* s) {
	char* c = s + strlen(s) - 1;
	while((*c == '\t' || *c == '\r' || *c == '\n') && (c > s))
		c--;
	c++;
	*c = 0;
}

unsigned int load_table(FILE* in, INDEX** list) {
	unsigned int count = 16;
	unsigned int index = 0;
	char email[MAXEMAIL];
	char comment[MAXCOMMENT];

	if(*list == NULL)
		*list = (INDEX*)malloc(count * sizeof(INDEX));
	else
		*list = (INDEX*)realloc(*list, count * sizeof(INDEX));

	size_t offset;
	while(!feof(in)) {
		if((index + 1) > count) {
			count *= 2;
			*list = (INDEX*)realloc(*list, count * sizeof(INDEX));
		}
		(*list)[index].offset = ftell(in);
		fgets((*list)[index].nick, MAXNICK, in);
		trim((*list)[index].nick);
		if(strlen((*list)[index].nick) == 0)
			continue;
		fgets(email, MAXEMAIL, in);
		fgets(comment, MAXCOMMENT, in);
		index++;
	}
	qsort(*list, index, sizeof(INDEX), listsortcb);
	return index;
}

void free_table(INDEX** list) {
	if(*list == NULL)
		return;
	free(*list);
	*list = NULL;
}

void load_entry(const INDEX* index, ENTRY* out, FILE* in) {
	fseek(in, index->offset, SEEK_SET);
	fgets(out->nick, MAXNICK, in);
	fgets(out->email, MAXEMAIL, in);
	fgets(out->comment, MAXCOMMENT, in);
	trim(out->nick);
	trim(out->email);
	trim(out->comment);
}

INDEX* find_nick(const char* nick, INDEX* list, unsigned int count) {
	INDEX search;
	strcpy(search.nick, nick);
	return bsearch(nick, list, count, sizeof(INDEX), listsortcb);
}

