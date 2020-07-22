#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 100

void find_max (int  (*array)[max], int rows, int cols){
	int i, j, maximum;
	int index_row, index_col;
	maximum = array[0][0];
	for (i = 0; i < rows; i++){
  	  for (j = 0; j < cols; j++){
          	if (array[i][j] > maximum){
            	maximum = array[i][j];
				index_row = i+1;
				index_col = j+1;
  	  		}
  		printf("%d ", array[i][j]);
  	  }
  	  printf("\n");
    }
	printf("Maximum element in the matrix is %d\n", maximum);
	printf("The index of maximum value is (%d %d)\n", index_row, index_col);
}

int main()
{
	int i, j, row, col, matrix[max][max];
	printf("Enter the number of rows and columns of matrix\n");
  	scanf("%d%d",&row,&col);

  	printf("Enter the elements of the matrix\n");

  	for (i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
    find_max(matrix, row, col);
	return 0;
}
