#include<stdio.h>
#include<stdlib.h>

double f_equal(double x, double y);
double f_abs(double x);
double f_min(double x,double y);
#define e 0.000001
int main(void){
    double x,y,result;
    printf("실수를 입력하시오: ");
    scanf("%lf",&x);
    printf("실수를 입력하시오: ");
    scanf("%lf",&y);
    result = f_equal(x,y);
    if(result ==0 )
        printf("두 개의 실수가 서로 다름");
    else
        printf("두 개의 실수가 서로 같음");
    return 0;
}
double f_equal(double x, double y){
    double r1,r2,r3;
    r1 = f_abs(x-y);
    r2 = f_min(x,y);
    r3 = r1 / r2;
    if(r3<e)
        return 1;
    else 
        return 0;
}
double f_abs(double x){
    if(x<0)
        return (-x);
    else return x;
}
double f_min(double x, double y){
    double tmp = (x<y)?x:y;
    return tmp;
}
