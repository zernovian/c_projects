#include <stdio.h>
int main (){
/*3. Employee Bonus and Performance Evaluation
Problem
An employee receives a bonus based on:
Experience ≥ 5 years AND performance rating ≥ 8 → 20% bonus
Experience ≥ 3 years AND rating ≥ 6 → 10% bonus
Otherwise → 5% bonus
Additionally, employees with a salary above ?50,000 and rating below 5 receive no bonus.
Calculate the final salary.
Test Cases
Salary Experience Rating Output
40000 6 9 48000.00
50000 4 7 55000.00
30000 2 8 31500.00
60000 6 4 60000.00
45000 5 8 54000.00
70000 2 5 73500.00*/
float salary,experience,rating;
    printf("Enter your salary: ");
    scanf("%f",&salary);

    printf("Enter your experience in years: ");
    scanf("%f",&experience);

    printf("Enter your performance rating: ");
    scanf("%f",&rating);
    
    if(salary>50000 && rating<5){
        printf("Final Salary: %.2f",salary);
    }
    else if(experience>=5 && rating>=8){
        printf("Final Salary: %.2f",salary*1.2);
    }
    else if(experience>=3 && rating>=6){
        printf("Final Salary: %.2f",salary*1.1);
    }
    else{
        printf("Final Salary: %.2f",salary*1.05);
    }

}