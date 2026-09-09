#include <stdio.h>
int main(){
    int a=10;
    printf("%d\n",a);
    printf("%d\n",&a);
    int *d=&a;
    printf("%d",d);

}