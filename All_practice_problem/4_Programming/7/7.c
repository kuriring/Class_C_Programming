#include<stdio.h>

int main(void){
    int a,b;
    printf("정수를 입력하시오: ");
    scanf("%d",&a);
    printf("2를 곱하고 싶은 횟수:");
    scanf("%d",&b);
    printf("%d<<%d 의값:%d",a,b,a<<b);
    return 0;
}
