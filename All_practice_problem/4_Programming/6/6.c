#include<stdio.h>

int main(void){
    int a;
    printf("정수를 입력하시오: ");
    scanf("%d",&a);
    printf("2의 보수: %d",(~a)+1);
    return 0;
}
