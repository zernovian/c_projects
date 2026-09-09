#include <stdio.h>
int main() {
    float English,Maths,CS,Total,Average;
    printf("enter marks of English: ");
       scanf("%f",&English);
    printf("enter marks of Maths: ");
        scanf("%f",&Maths);
    printf("enter marks of CS: ");
        scanf("%f",&CS);
    Total= English+Maths+CS;
    Average=Total/3.0;
    printf("\nTotal marks: %.2f\n Average: %.2f",Total,Average);
return 0;
}

