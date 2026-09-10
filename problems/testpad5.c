#include <stdio.h>

int main() {
    int num, first, last, sum;

    scanf("%d", &num);

    first = num / 1000;
    last = num % 10;

    sum = first + last;

    printf("%d\n", sum);

    return 0;
}