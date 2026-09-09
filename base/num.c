#include <stdio.h>
int main() {
    int number[10];
    for(int i=0;i<10; i++){
        printf("enter %d value ",i+1);
        scanf("%d", &number[i]);    
    }   
    for(int i=0;i<10; i++){
        printf("the value is %d\n",number[i]);
    }
return 0;    
}    