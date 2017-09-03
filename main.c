#include <stdio.h>
#include "filecount.h"

int main(int argc, char **argv) {
	FILE *textfile = fopen(argv[1], "r");
	if (textfile == NULL) {
		puts("Error opening file -- exiting!");
	}
	if (checkArgs("/l", argc, argv)) {
		printf("#lines = %zu\n", lines(textfile));
	}
	if (checkArgs("/s", argc, argv)) {
		printf("size = %zu bytes\n", bytes(textfile));
	}
	if (checkArgs("/c", argc, argv)) {
		printf("#chars = %zu\n", chars(textfile));
	}
	return 0;
}
