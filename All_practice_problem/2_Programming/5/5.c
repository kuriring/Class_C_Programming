#include<stdio.h>

int main(void){
    float a;
    printf("실수를 입력하시오: ");
    scanf("%f",&a);
    printf("다항식의 값은 %f",(3*a*a)+(7*a)+11);
    return 0;
}
