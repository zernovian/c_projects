#include <stdio.h>
int main (){
    int a=10;
    int b=30;
    int c=50;
   if (a>30 && b>40){
        printf("greater\n");
    }else{
        printf("smaller\n");
    }
    if (a>30 && b>40 || c>60){
        printf("greater\n");
    }else{
        printf("smaller\n");
    }
    if (a<30 || b>40){
        printf("greater\n");
    }else{
        printf("smaller\n");
    }
    if (!(a>30 )){
        printf("greater\n");
    }else{
        printf("smaller\n");
    }
}