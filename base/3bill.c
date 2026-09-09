#include <stdio.h>

int main() {
    char product_name[50];
    int quantity;
    float price, total_bill;

    printf("Enter product name: ");
    scanf(" %[^\n]s", product_name);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%f", &price);

    total_bill = quantity * price;

    printf("\nProduct: %s\n", product_name);
    printf("Total Bill Amount: %.2f\n", total_bill);

    return 0;
}
