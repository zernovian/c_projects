#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;

    printf(" %d | %d = %d\n", a, b, a | b);

    printf("%d ^ %d = %d\n", a, b, a ^ b);

    printf("%d << 1 = %d\n", a, a << 1);

    printf(" %d >> 1 = %d\n", a, a >> 1);
    
    return 0;
}

