#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("sum of first %d terms = %d\n", --i, sum);
    return 0;
}