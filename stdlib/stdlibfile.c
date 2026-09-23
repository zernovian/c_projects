#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
int main (){
    int x= -106;
    char word[50]="bankai";
    char destinationword[10];
    float a=7.3;
    char cha='A';
    char low='a';
    time_t mtime ;
    /*scanf("%d",&x);
    scanf("%s",&word);*/
    strcpy(destinationword,word);
    printf("original value = %d\n",x);
    printf("abs will print positive value = %d\n",abs(x));
    printf("length of word is = %d\n",strlen(word));
    printf("destination word is %s\n",destinationword);
    printf("ceil function %f\n",ceil(a));
    printf("floor function %f\n",floor(a));
    (isalpha(cha))?printf("alphabet\n"):printf("not\n");
    printf("%c\n",tolower(cha));
    printf("%c\n",toupper(low));
    time(&mtime);
    printf("time %s",ctime(&mtime));
}