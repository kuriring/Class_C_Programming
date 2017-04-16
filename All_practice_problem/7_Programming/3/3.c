#include<stdio.h>

#define pie 3.141592
double cal_area(double radius);

int main(void){
    double r,result;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf",&r);
    result = cal_area(r);
    printf("원의 면적은 %lf입니다.",result);
    return 0;
}

double cal_area(double radius){
    double tmp;
    tmp = radius * pie * radius;
    return tmp;
}
