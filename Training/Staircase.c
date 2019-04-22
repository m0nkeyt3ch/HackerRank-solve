#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int max, i, j, k;

  scanf("%d", &max);

  for (i = 1; i < max + 1; i++) {
    for (j = 1; j <= max - i; j++) {
      printf(" ");
    }
    for (k = i; k > 0; k--) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
