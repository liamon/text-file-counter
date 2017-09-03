#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "filecount.h"

bool checkArgs(char *arg, int argc, char **argv) {
	switch (argc) {
		case 3:
			if (!strcmp(argv[2], arg)) {
				return true;
			}
			return false;
		case 4:
			if (!strcmp(argv[2], arg) || !strcmp(argv[3], arg)) {
				return true;
			}
			return false;
		case 5:
			if (!strcmp(argv[2], arg) || !strcmp(argv[3], arg) || !strcmp(argv[4], arg)) {
				return true;
			}
			return false;
	}
}

size_t lines(FILE *fp) {
	size_t lines = 0;
	char test = getc(fp);
	char prevchar = '\0';
	while (test  != EOF) {
		if ('\n' == test) {
			++lines; 
		}
		prevchar = test;
		test = getc(fp);
	} // I decided to count it with getc instead of with fgets as this way allows for the lines to be any length
	
	if (prevchar != '\n') {
		++lines; // Need to increment this as there would have been no newline at the end of the last line
	}
	return lines;
}

size_t bytes(FILE *fp) {
	size_t bytes = 0;
	rewind(fp); // Need to include this in the remaining functions else fp will be at EOF and the while loops will not run
	char test = getc(fp);
	while (test != EOF) {
		++bytes;
		test = getc(fp);
	}
	return bytes;
}

size_t chars(FILE *fp) {
	size_t chars = 0;
	rewind(fp);
	char test = getc(fp);
	while (test != EOF) {
		if ('\n' != test) {
			++chars;
		}
		test = getc(fp);
	}
	return chars;
}
