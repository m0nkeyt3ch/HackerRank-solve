#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetPosition(char c)
{
   if (c >= 'a' && c <= 'z') {
      return c - 'a' + 1;
   }
   else if (c >= 'A' && c <= 'Z') {
      return c - 'A' + 1;
   }
   else  {
      // Indicate that it isn't a letter.
      return -1;
   }
}

int main(int argc, char const *argv[]) {
	int pos;
	char userInput;

	scanf("%c", &userInput);
	pos = GetPosition(userInput);
	printf("%d\n", pos);
	return 0;
}
