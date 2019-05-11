#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SCORE 1001

int bullet[MAX_SCORE];
int coder[MAX_SCORE];
int prev[MAX_SCORE];

int main() {

  int N;

  scanf("%d", &N);
  int tmp;

  for (int i = 0; i < N; i++) {
    scanf("%d", &tmp);
    bullet[tmp]++;
    coder[tmp]++;
  }

  int current;
  tmp = -1;
  for (int i = 1; i < MAX_SCORE; i++) {
    if (coder[i] != 0) {
      prev[i] = tmp;
      current = tmp;
      tmp = i;

      while (current != -1 && bullet[i] != 0) {

        if (bullet[i] >= coder[current]) {
          bullet[i] -= coder[current];
          coder[current] = 0;
          prev[i] = prev[current];
        } else {
          coder[current] -= bullet[i];
          bullet[i] = 0;
        }

        current = prev[current];
      }
    }
  }
  int sum = 0;

  current = tmp;
  while (current != -1) {
    sum += current * coder[current];
    current = prev[current];
  }

  printf("%d\n", sum);

  return 0;
}
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int top = -1; // defining top of stack is empty
void Push(int stack[], int x, int n) {
  if (top == n - 1) {
    printf("Stack is overflow\n");
  } else {
    top = top + 1;
    stack[top] = x;
  }
}

int isEmpty() {
  if (top == -1) { // stack is isEmpty
    return 1;
  } else {
    return 0;
  }
}

void Pop() {
  if (isEmpty()) {
    printf("Stack Error\n");
  } else {
    top = top - 1;
  }
}

int topElement(int stack[]) { return stack[top]; }

int size() { return top + 1; }

int main(int argc, char const *argv[]) {
  int max, stack[MAX], result = 0, temp;
  int i;

  scanf("%d", &max);

  while (max) {
    scanf("%d", &temp);
    if (isEmpty()) {
      Push(stack, temp, max);
    } else if (temp > topElement(stack)) {
      Pop();
      Push(stack, temp, max);
      result += topElement(stack);
    } else if (temp < topElement(stack)) {
      Push(stack, temp, max);
      // result += topElement(stack);
    }
    max--;
  }

  printf("%d\n", result);
  return 0;
}*/
