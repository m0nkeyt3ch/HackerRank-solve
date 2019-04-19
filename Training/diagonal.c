#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 500

int main(int argc, char const *argv[]) {
  int input, i, j;
  int array[MAX][MAX];
  int diagon1 = 0, diagon2 = 0;

  scanf("%d", &input);
  for (i = 0; i < input; i++) {
    for (j = 0; j < input; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  i = 0;
  while (i < input) {
    diagon1 = diagon1 + array[i][i];
    i++;
  }

  i = 0;
  j = input - 1;
  while (i < input) {
    diagon2 = diagon2 + array[i][j];
    i++;
    j--;
  }

  printf("%d\n", abs(diagon1 - diagon2));

  return 0;
}
