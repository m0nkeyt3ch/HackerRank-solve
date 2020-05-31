#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
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

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}

// Driver code
int main()
{
    int arr1[100] = {};
	int i;
	int n1;
    int arr2[100] = {};
    int n2;
	//scan array 1
	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}
	//scan array 2
	scanf("%d", &n2);
	for (i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}

	bubbleSort(arr1, n1);
	bubbleSort(arr2, n2);
	
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    //cout << "Array after merging" <<endl;
    for (int i=(n1+n2)-1; i >= 0; i--)
        printf("%d ", arr3[i]);
    return 0;
}
