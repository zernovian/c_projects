#include <stdio.h>

int main(){
    int x, y;

    //printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    /*if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }*/
   
   for (int i = 1; i <= y; i++) {b
        //printf("%d * %d = %d\n", x, i, x * i);
        printf("%d\n", x * i);
    }

    return 0;
}
