#include <stdio.h>
int main() {
    char name[50];
    float bs,hra,da,gross_salary;
    
    printf("enter employee name: ");
    scanf(" %[^\n]s",name);
    printf("enter basic salary, hra, da: ");
    scanf("%f %f %f", &bs, &hra, &da);

    gross_salary=bs+hra+da;

    printf("\nemployee: %s\ngross_salary: %.2f\n",name, gross_salary);
    return 0;
}  
