#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define MAX 1000000000
int main() {
  int n, i, number1, number2, max, result;
  cin >> n;
  while (n) {
    //scanf("%d", &max);
		cin >> max;
		number1 = 0;
    number2 = 1;
    for (i = 1; i <= max; i++) {
      number1 += i;
      number2 *= i;
      result = number2 % number1;
    }
		result = number2 % number1;
    // printf("%d %d\n", number1,  number2);
    if (result == 0) {
      std::cout << "YES" << '\n';
    } else {
      std::cout << "NO" << '\n';
    }
    n--;
  }
  return 0;
}
