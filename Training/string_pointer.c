#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 100

void move (char *string, char destroy) {
	int i,j;
	int len = strlen(string);

	for (i = 0; i < len; i++){
		if (string[i] == destroy) {
			for (j = i; j < len; j++) {
				/* code */
				string[j] = string[j+1];
			}
			len--;
			i--;
		}
	}
}
int main(int argc, char const *argv[]) {
	char str[Max];
	char toRemove;

	gets(str);
	//scanf("%s", str);
	toRemove = getchar();

	move(str,toRemove);
	printf("%s", str);
	return 0;
}
