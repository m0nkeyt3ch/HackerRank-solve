#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int  count = 0;

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
	int m = l + (r-l)/2;

    // Check if x is present at mid
    if (arr[m] == x)
        return m;

    // If x greater, ignore left half
    if (arr[m] < x)
        l = m + 1;

    // If x is smaller, ignore right half
    else
         r = m - 1;
  }

  // if we reach here, then element was not present
  return -1;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(int argc, char const *argv[]) {
	//int value, array[MAX];
	int index, x;
	int array[] = {64, 34, 25, 12, 22, 11, 90, 100};
    int value = sizeof(array)/sizeof(array[0]);
	//int i;
	// scanf("%d", &value);
	// for (i = 0; i < value; i++) {
	// 	scanf("%d", &array[i]);
	// }
	bubbleSort(array, value);
	printArray(array, value);
	printf("%d\n", count);
	printArray(array, value);
	scanf("%d", &x);
	index = binarySearch(array, 0, value, x);
	printf("%d\n", index);
	//search algo

	//printf("%s\n", );
	return 0;
}
