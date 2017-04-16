#include<stdio.h>
double f_to_c(double f);

int main(void){
    double x,result;
    printf("화씨 온도를 입력하시오: ");
    scanf("%lf",&x);
    result = f_to_c(x);
    printf("섭씨온도는 %lf",result);
    return 0;
}
double f_to_c(double f){
    double C;
    C = (5.0/9.0) * (f-32.0);
    return C;
}
