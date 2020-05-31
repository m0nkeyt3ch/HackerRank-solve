#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

#define M 100
#define N 100

// This function stores transpose of A[][] in B[][]
void input_matrix(int A[][N], int r, int c){
	int i, j;
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
				scanf("%d", &A[i][j]);
		}
	}
}

void printMatrix(int A[][N], int r, int c){
	int i, j;
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
				printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}

void transpose(int A[][N], int B[][N], int r, int c)
{
    int i, j;
    for (i = 0; i < c; i++)
        for (j = 0; j < r; j++)
            B[i][j] = A[j][i];
}


int main()
{
	//int test[] = {1,2,3,4,5}
    int A[M][N] ;
  	int n,m;
    // Note dimensions of B[][]
    int B[N][M], i, j;
	scanf("%d %d", &m, &n);


	input_matrix(A, m, n);
	// for (i = 0; i < m; i++){
	// 	for (j = 0; j < n; j++){
	// 			printf("%d ", A[i][j]);
	// 	}
	// 	printf("\n");
	// }
	printMatrix(A, m, n);
	transpose(A, B, m, n);

    printf("Result matrix is \n");

	//Print Transpose
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        printf("%d ", B[i][j]);
        printf("\n");
    }

    return 0;
}

// void input_matrix(int mat[][],int col, int row) {
// 	int c, d;
// 	for (c = 0; c < row; c++)
//       for (d = 0; d < col; d++)
//         scanf("%d", &mat[c][d]);
// }
//
// void transpose_mat(matrix[][], transpose[][], int col, int row)
// int main()
// {
//   int m, n, c, d, matrix[10][10], transpose[10][10];
//
//   printf("Enter the number of rows and columns of a matrix\n");
//   scanf("%d%d", &m, &n);
//   printf("Enter elements of the matrix\n");
//
// 	input_matrix(matrix[m][n], m, n);
//
//
//
//   for (c = 0; c < m; c++)
//     for (d = 0; d < n; d++)
//       transpose[d][c] = matrix[c][d];
//
//   printf("Transpose of the matrix:\n");
//
//   for (c = 0; c < n; c++) {
//     for (d = 0; d < m; d++)
//       printf("%d\t", transpose[c][d]);
//     printf("\n");
//   }
//
//   return 0;
// }
