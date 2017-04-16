#include<stdio.h>

int main(void){
    float a;
    printf("마일을 입력하시오: ");
    scanf("%f",&a);
    printf("%.0f마일은 %f미터입니다.",a,a*1609.0);
    return 0;
}
