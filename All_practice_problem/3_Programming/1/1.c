#include<stdio.h>

int main(void){
    double a;
    printf("실수를 입력하시오:");
    scanf("%lf",&a);
    printf("실수형식으로는 %lf입니다.\n지수형식으로는 %e입니다.",a,a);
    return 0;
}
