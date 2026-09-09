#include <stdio.h>
struct student{
    long rollno;
    char studentname[50];
};
int main(){
    struct student s1;
    printf("Enter roll number: ");
    scanf("%ld", &s1.rollno);
    printf("Enter student name: ");
    while(getchar()!='\n');
    //scanf(" %[^\n]",&s1.studentname);
    fgets(s1.studentname,sizeof(s1.studentname),stdin);
    printf("Student's name is %s and roll no is %ld",s1.studentname,s1.rollno);
} 