#include <stdio.h>
int main (){
    /*1. Smart Electricity Bill Calculator
Problem
A power company calculates an electricity bill based on units consumed:
First 100 units → ?2/unit
Next 200 units → ?3/unit
Next 300 units → ?5/unit
Above 600 units → ?7/unit
If the total bill exceeds ?2,000, add a 10% surcharge.
Add a fixed service charge of ?100.
Use operators in C to calculate the final bill.
Test Cases
Input                Expected Output
50                    200.00
100                  300.00
250                  750.00
400                  1300.00
600                  2400.00
800                  4048.00
 
    */
    float unit,bill;
    printf("write units consumed: ");
    scanf("%f",&unit);

    if(unit<=100){
        bill=unit*2;
    }
    else if (unit>100 && unit<=300){
        bill=100*2+(unit-100)*3;
    }
    else if (unit>300 && unit<=600){
        bill=100*2+200*3+(unit-300)*5;
    }
    else{
        bill=100*2+200*3+300*5+(unit-600)*7;
    }
    bill=(bill>2000)?bill*1.1:bill;
    bill+=100; 
        printf("bill: %.2f",bill);
    return 0;
}