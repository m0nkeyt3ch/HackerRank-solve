#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int number){
	if (number <= 1) {
		return number;
	}
	return fibo(number-1) + fibo(number-2);
}

int main(int argc, char const *argv[]) {
	int input;
	int i;
	scanf("%d", &input);
	for (i = 1; i <= input; i++) {
		printf("%d ", fibo(i));
	}
	return 0;
}
