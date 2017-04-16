#include<stdio.h>

int main(void){
    float a,b;
    printf("2개의 실수를 입력하시오 :");
    scanf("%f %f",&a,&b);
    printf("%f %f %f %f",a+b,a-b,a*b,a/b);
    return 0;
}
