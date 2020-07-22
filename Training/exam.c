#include <stdio.h>
#define row 3
#define col 4

void sort_col (int (*ptr)[col], int row_n){
	int i, j;
	int swap;
	//row_n -= row_n;
	//ptr[row_n][];
	row_n = row_n - 1 ;
	if (row_n < 0) {
		printf("Row cannot minus fuck\n");
	}
	for(i = 0; i < col-1; i++){
      for(j = 0; j < col-i-1; j++){
        if(ptr[row_n][j] > ptr[row_n][j+1]){
          swap = ptr[row_n][j];
          ptr[row_n][j] = ptr[row_n][j+1];
          ptr[row_n][j+1] = swap;
  		//flag++;
        }
      }
    }
	printf("After sorted you bitch\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[]) {
	int i, j, matrix[row][col];
	//printf("Enter the number of rows and columns of matrix\n");
  	//scanf("%d%d",&row,&col);

  	printf("Enter the elements of the matrix\n");

  	for (i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Before sorted you bitch\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	int rows;
	scanf("%d", &rows);
    sort_col(matrix, rows);
	return 0;
}
