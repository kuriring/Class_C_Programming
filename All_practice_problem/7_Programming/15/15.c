#include<stdio.h>

double round_r(double f);
int main(void){
    double f;
    printf("실수를 입력하시오: ");
    scanf("%lf",&f);
    round_r(f);
    return 0;
}
double round_r(double f){
    double tmp;
    tmp =(int)(f+0.5);
    printf("%f",tmp);
}
