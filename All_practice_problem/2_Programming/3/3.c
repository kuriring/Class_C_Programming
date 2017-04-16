#include<stdio.h>

int main(void){
    float a,b;
    printf("삼각형의 밑변: ");
    scanf("%f",&a);
    printf("삼각형의 높이: ");
    scanf("%f",&b);
    printf("삼각형의 넓이:%f",a*b*0.5);
    return 0;
}
