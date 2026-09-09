#include <stdio.h>

int main(void) {
    char name[50];
    float bs, hra, da, gross_salary;

    printf("Enter employee name: ");
    scanf(" %49[^\n]", name);

    printf("Enter basic salary, HRA, and DA: ");
    if (scanf("%f %f %f", &bs, &hra, &da) != 3) {
        printf("Invalid salary input.\n");
        return 1;
    }

    gross_salary = bs + hra + da;

    printf("\nEmployee: %s\nGross salary: %.2f\n", name, gross_salary);

    return 0;
}