#include <stdio.h>
int main(){
    int marks,attendence,assignments;
    scanf("%d %d %d",&marks,&attendence,&assignments);
    ((marks>=60)&&(attendence>=75)&&(assignments>=5))?printf("Eligible"):printf("Not Eligible");
    return 0;
}