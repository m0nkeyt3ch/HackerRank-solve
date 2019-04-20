#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 200

int main(int argc, char const *argv[]) {
  int input, i;
  int minus = 0, plus = 0, zero = 0;
  int array[MAX];

  scanf("%d", &input); // input handler

  for (i = 0; i < input; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < input; i++) {
    if (array[i] > 0) {
      plus++;
    } else if (array[i] < 0) {
      minus++;
    } else if (array[i] == 0) {
      zero++;
    }
  }

  printf("%.6lf\n", (double)plus / input);
  printf("%.6lf\n", (double)minus / input);
  printf("%.6lf\n", (double)zero / input);
  return 0;
}
