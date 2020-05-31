#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max 100

int binarykey(int arr[], int right, int key){
	int carry, middle, offlane;
	carry = 0;
    offlane = right - 1;
    middle = (carry+offlane)/2;

	while (carry <= offlane) {
	  if (arr[middle] < key)
		carry = middle + 1;
	  else if (arr[middle] == key) {
		//printf("Key Found");
		break;
	  }
	  else
		offlane = middle - 1;

	  middle = (carry + offlane)/2;
	}
	if (carry > offlane)
		return -1;
	  //printf("Not found! %d isn't present in the list.\n", key);
	return middle;
}
// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
//
// // A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
//    int i, j;
//    for (i = 0; i < n-1; i++)
//
//        // Last i elements are already in place
//        for (j = 0; j < n-i-1; j++)
//            if (arr[j] > arr[j+1])
//               swap(&arr[j], &arr[j+1]);
// }
//
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

int main()
{
  int i, n, key, array[Max], result;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &key);

  // bubbleSort(array,n);
  // printArray(array, n);
  result = binarykey(array, n, key);
  if (result == -1) {
  	printf("Fuck i don't found it in here bitch\n");
} else{
	printf("Fuck i found it in %d here bitch\n", result);
}

  return 0;
}


// #include <stdio.h>
//
// // A iterative binary key function. It returns location of x in
// // given array arr[l..r] if present, otherwise -1
//
// int binarykey(int arr[], int l, int r, int x)
// {
//   while (l <= r)
//   {
// 	int m = l + (r-l)/2;
//
//     // Check if x is present at mid
//     if (arr[m] == x)
//         return m;
//
//     // If x greater, ignore left half
//     if (arr[m] < x)
//         l = m + 1;
//
//     // If x is smaller, ignore right half
//     else
//          r = m - 1;
//   }
//
//   // if we reach here, then element was not present
//   return -1;
// }
//
// int main(void)
// {
//    int arr[] = {2, 3, 4, 10, 40};
//    int n = sizeof(arr)/ sizeof(arr[0]);
//    int test = sizeof(arr);
//    printf("%d\n", test);
//    printf("%d\n", n);
//    // int x = 10;
//    // //binary key begin
//    // int result = binarykey(arr, 0, n-1, x);
//    // if (result == -1) {
//    // 	/* code */
// 	// 	printf("Element is not present in array");
//    // } else {
// 	//    printf("Element is present at index %d", result);
//    // }
//    //(result == -1)? : ;
//    return 0;
// }
