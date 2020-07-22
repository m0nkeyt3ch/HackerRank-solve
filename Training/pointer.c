#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 100

// void print_array(int *arr, int size){
// 	int i;
// 	for (i = size-1; i >= 0; i--) {
// 		/* code */
// 		printf("%d ", arr[i]);
// 	}
// }
//
// int main(int argc, char const *argv[]) {
// 	int n, i, array[max];
// 	scanf("%d", &n);
// 	for (i = 0; i < n; i++) {
// 		scanf("%d", &array[i]);
// 	}
// 	print_array(array,n);
// 	return 0;
// }
int countEven(int *array, int size){
	int count = 0;
	int i;
	for (i = 0; i < size; i++) {
		if (array[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[]) {
	// int testing[] = {1,2,3,4,5,6,7,8,9,10};
	// printf("%d\n", countEven(testing,10));
	int arr[max], i, num;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", countEven(arr,num));
	return 0;
}
