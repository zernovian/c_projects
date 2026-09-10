#include <stdio.h>
int main (){
    int totaldays,years,weeks,days;
    scanf("%d",&totaldays);
    
    years=totaldays/365;
    weeks=(totaldays%365)/7;
    days=(totaldays%365)%7;
    printf("%d %d %d ",years,weeks,days);
}