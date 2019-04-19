#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 500

int main(int argc, char const *argv[]) {
  int input, i, j;
  int array[MAX][MAX];
  int diagon1, diagon2;

  scanf("%d", &input);
  for (i = 0; i < input; i++) {
    for (j = 0; j < input; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  for (i = 0; i < input; i++) {
    for (j = 0; j < input; j++) {
      // diagon1 = array[i++][j++];
    }
  }
  printf("%d\n", diagon1);

  return 0;
}
