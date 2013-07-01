#include <stdio.h>

#include "adb1.h"

int main(int argc, char** argv) {
	int i;
	INDEX* list = NULL;

	FILE* in = fopen("adb.txt", "rt");

	unsigned int count = load_table(in, &list);
	printf("Elements: %u\n", count);
	for(i = 0; i < count; i++)
		printf("nick(%d) = '%s'\n", i, list[i].nick);

	INDEX* index = find_nick("priska", list, count);

	ENTRY entry;
	fseek(in, 0, SEEK_SET);
	load_entry(index, &entry, in);
	printf("nick: '%s'\n", entry.nick);
	printf("email: '%s'\n", entry.email);
	printf("comment: '%s'\n", entry.comment);

	free_table(&list);
	fclose(in);
}

