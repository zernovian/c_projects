#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    scanf("%d %d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("%d\n", angle3);

    return 0;
}