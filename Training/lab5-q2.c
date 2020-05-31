#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_n_char(char fromPrint, int maxTime){
		int j;
		for (j = 0; j < maxTime; j++) {
			printf("%c", fromPrint);
		}
		printf("\n");
}

void print_char(char userChar, int maxLenght, int maxLine){
	int i;
	for (i = 0; i < maxLine; i++) {
		print_n_char(userChar, maxLenght);
	}
}

int main(int argc, char const *argv[]) {
	int lines;
	int lenght;
	char input;

	printf ("please enter a character, number of times in a line, and number of lines:\n");
	scanf("%c,%d,%d", &input, &lenght, &lines);
	print_char(input, lenght, lines);

	return 0;
}
