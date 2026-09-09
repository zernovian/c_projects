#include <stdio.h>
int main () { 
    char name[50];
    int age;
    float perc;
    printf("what's your name?\n");
    scanf("%[^\n]s",&name);
    printf("what's your age?\n");
    scanf("%d",&age);
    printf("what's your percentage?\n");
    scanf("%f",&perc);
    printf("\nname: %s\nage: %d\npercentage: %.2f",name,age,perc);

return 0;

}