#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct details
{
	const char *p_id;
	char name[10];
	int qty;
	int price;
	//struct date mfg;
};

void show_menu(){
	printf("1.View Catalog\n");
	printf("2.Add New Product\n");
	printf("3.Exit\n");
}

void sub_menu(){
	printf("1.Ascending by ID\n");
	printf("2.Descending by ID\n");
	printf("3.Ascending by Name\n");
	printf("4.Descending by Name\n");
	printf("5.Exit\n");
}

void view_cat(struct details final[], int val){
	int i;
	printf("             *****  INVENTORY ***** \n");
	printf("-------------------------------------------------------------------------\n");
	printf("Product ID		|    Product Name           | Quantity |  Price |\n");
	printf("-------------------------------------------------------------------------\n");
	for (i = 0; i < val && final[i].p_id != NULL; i++)
		printf("%-15s    		%-15s       	%-5d    %-5d \n", final[i].p_id, final[i].name, final[i].qty, final[i].price);
	printf("-------------------------------------------------------------------------\n");
}


void sort_product(struct details inventory[], int n){
	int i, j;
	struct details tmp;

	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++){
			if (strcmp(inventory[i].name, inventory[j].name) > 0) {
        		tmp = inventory[i];
        		inventory[i] = inventory[j];
        		inventory[j] = tmp;
      		}
		}
	}
		//printf("Test\n");
}


void add_item(){

}

int main() {


	struct details item[] = {{"PR004", "Soy Sauce", 7, 21000}, {"PR002", "Tofu", 25, 3000}, {"PR003", "Tempe", 30, 2500},
		{"PR001", "Soy Milk", 16, 6500}, {"PR005", "Soy Yogurt", 10, 18000}};

	int n, op, op2;
	n = sizeof(item);
	//sort_product(item, n);
	while (1) {
		show_menu();
		scanf("%d", &op);
		if (op == 1) {
				while (1) {
					sub_menu();
					scanf("%d", &op2);
					if (op2 == 1) {
						/* code */
						//printf("ok 1\n");

						view_cat(item, n);
					}
					else if (op2 == 2) {
						/* code */
						printf("ok 2");
					}
					else if (op2 == 3) {
						/* code */
						printf("ok 3");
					}
					else if (op2 == 4) {
						printf("ok 4");
					}
					else if (op2 == 5) {
						break;
					}
					else {
						printf("Invalid Input\n");
					}
				}
		}
	 	else if( op == 2){

		}
		else if (op == 3) {
			return 0;
		}
		else {
			printf("Invalid Input\n");
		}
	}


    // printf("Enter number of items:");
    // scanf("%d", &n);
    fflush(stdin);
    // for (i = 0; i < n; i++)
    // {
    //     fflush(stdin);
    //     printf("Item name: \n");
    //     scanf("%s", item[i].name);
    //     fflush(stdin);
    //     printf("Item code: \n");
    //     scanf("%d", &item[i].code);
    //     fflush(stdin);
    //     printf("Quantity: \n");
    //     scanf("%d", &item[i].qty);
    //     fflush(stdin);
    //     printf("price: \n");
    //     scanf("%d",  &item[i].price);
    //     fflush(stdin);
    //     /*printf("Manufacturing date(dd-mm-yyyy): \n");
    //     scanf("%d-%d-%d", &item[i].mfg.day,
    //     &item[i].mfg.month, &item[i].mfg.year);*/
    // }

}
