#include <stdio.h>
int main() {
    char myword[100];
    printf("whats ur name?");
    //scanf("%2[^\n]", &myword);
    fgets(myword,sizeof(myword),stdin);
    printf("hello ,%s" ,myword);
    return 0;
}        
