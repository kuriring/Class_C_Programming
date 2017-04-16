#include<stdio.h>

int main(void){
    char x;
    printf("문자를 입력하시오: ");
    scanf("%c",&x);
    if(x == 'R')
        printf("Rectangle");
    else if(x == 'T')
        printf("Triangle");
    else if(x=='C')
        printf("Circle");
    else
        printf("Unknown");
    return 0;
}
