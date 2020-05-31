#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double harmonic(double number1, double number2){
	double r1 = 1 / number1;    // reciprocals
    double r2 = 1 / number2;

    double hm = 2 / (r1 + r2);  // reciprocal of the arithmetic mean of the two
    return hm;
}
int main(int argc, char const *argv[]) {
	double num1, num2;

	scanf("%lf %lf", &num1, &num2);
	
	printf("%.2lf\n", harmonic(num1, num2));

	return 0;
}
