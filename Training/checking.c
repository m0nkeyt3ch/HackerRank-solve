#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max 100

#include <stdio.h>
#define Max 100

int main(void){
    int n_rows, n_cols, i,j;
    float kernel[Max][Max];
    int sum;

    printf("write the rows: \n");
    scanf("%d", &n_rows);
    printf("write the cols: \n");
    scanf("%d", &n_cols);

    for (i = 0; i < n_rows; i++){
        for (j = 0; j < n_cols; j++){
            scanf("%f", &kernel[i][j]);
        }
    }
    for (i = 0; i < n_rows; i++){
        for (j = 0; j < n_cols; j++){
            printf("%f\t", kernel[i][j]);
        }
        printf("\n");
    }

    // Sum all the num //

    sum = 0;
    for (j = 0; j < n_cols; j++){
        for(i = 0; i < n_rows; i++){
            sum = sum + kernel[i][j];
        }
        printf("sum of the %d column is = %d\n", j, sum);
        sum = 0;
    }
}
// struct Books {
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
// };
//
// /* function declaration */
// void printBook( struct Books *book );
// int main( ) {
//
//    struct Books Book1;        /* Declare Book1 of type Book */
//    struct Books Book2;        /* Declare Book2 of type Book */
//
//    /* book 1 specification */
//    strcpy( Book1.title, "C Programming");
//    strcpy( Book1.author, "Nuha Ali");
//    strcpy( Book1.subject, "C Programming Tutorial");
//    Book1.book_id = 6495407;
//
//    /* book 2 specification */
//    strcpy( Book2.title, "Telecom Billing");
//    strcpy( Book2.author, "Zara Ali");
//    strcpy( Book2.subject, "Telecom Billing Tutorial");
//    Book2.book_id = 6495700;
//
//    /* print Book1 info by passing address of Book1 */
//    printBook( &Book1 );
//
//    /* print Book2 info by passing address of Book2 */
//    printBook( &Book2 );
//
//    return 0;
// }
//
// void printBook( struct Books *book ) {
//
//    printf( "Book title : %s\n", book->title);
//    printf( "Book author : %s\n", book->author);
//    printf( "Book subject : %s\n", book->subject);
//    printf( "Book book_id : %d\n", book->book_id);
// }
