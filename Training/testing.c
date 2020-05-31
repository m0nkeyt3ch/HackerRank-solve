#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max 100

float sum_1 = 0;
float average_1 = 0;

// Function //
void sum(float arr[][Max], int rows, int cols);
void average(float arr[][Max], int rows, int cols);
void hight_value(float arr[][Max], int rows, int cols);

void calc_avelina(int res){
	average_1 = sum_1 / (res);
	printf("%.2f\n", average_1);
}

int main(void){
    int n_rows, n_cols, i,j;
    float kernel[Max][Max];

    n_rows = 4;
	n_cols = 3;
    printf("write 4 rows and 3 cols num: \n");

    for (i = 0; i < n_rows; i++){
        for (j = 0; j < n_cols; j++){
            scanf("%f", &kernel[i][j]);
        }
    }
    for (i = 0; i < n_rows; i++){
        for (j = 0; j < n_cols; j++){
            printf("%.2f\t", kernel[i][j]);
        }
        printf("\n");
    }
	sum(kernel, n_rows, n_cols);
	calc_avelina(n_rows*n_cols);

//average(kernel, n_rows, n_cols);
	hight_value(kernel, n_rows, n_cols);
}

void sum(float arr[][Max], int rows, int cols){
	int i, j;
    for (j = 0; j < cols; j++){
        for(i = 0; i < rows; i++){
            sum_1 += arr[i][j];
        }
        printf("sum of the %d column is = %f \n", j, sum_1);
    }
}

void hight_value(float arr[][Max], int rows, int cols){
	int i, j;
    float maximum;
    maximum = arr[0][0];
    for(i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
        	if(arr [i][j] > maximum){
        		maximum = arr[i][j];
			}
		}
	}
    printf("the maximum value in the matrix is: %f", maximum);
}
