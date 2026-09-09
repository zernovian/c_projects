#include <stdio.h>
int main (){
/*2. ATM Withdrawal Validation
Problem
An ATM accepts a withdrawal only when:
Amount is a multiple of ?100.
Amount is greater than ?0.
Amount does not exceed the account balance.
After withdrawal, at least ?500 must remain.
ATM allows a maximum withdrawal of ?20,000.
Print Approved or Rejected.
Test Cases
Balance        Amount         Output
10000          5000             Approved
10000          5500             Approved
10000          9600             Rejected
5000            4500             Approved
25000          20500           Rejected
3000            700              Rejected*/
    float balance,amount;
    printf("Enter your account balance: ");
    scanf("%f",&balance);

    printf("Enter the amount you want to withdraw: ");
    scanf("%f",&amount);
    if(amount%100==0 && amount>0 && amount<=balance && (balance-amount)>=500 && amount<=20000){
        printf("Approved");
    }
    else{
        printf("Rejected");
    }


}