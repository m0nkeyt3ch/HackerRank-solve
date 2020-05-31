#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[]) {
	int line_count = 1;
	int char_count = 0;
	int n_space = 0;
	int read_char;

	while ((read_char = getchar()) != '#') {
		if (isalpha(read_char) || isdigit(read_char)) {
			char_count++;
		}
		else if (read_char == ' ') {
			n_space++;
		}
		else if (read_char == '\n') {
			line_count++;
		}
	}

	printf("Line count = %d\n", line_count);
	printf("Spaces count = %d\n", n_space);
	printf("Character count = %d\n", char_count);
	return 0;
}
