#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, ci;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    amount = principal * pow((1 + rate / 100.0), time);
    ci = amount - principal;

    printf("%.2f\n", ci);

    return 0;
}