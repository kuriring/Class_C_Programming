#include<stdio.h>
typedef struct{
    double real;
    double imag;
}Complex;
void complex_add(Complex c1,Complex c2);
int main(void){
    Complex c1,c2;
    printf("첫번째 복소수: ");
    scanf("%lf %lf",&c1.real,&c1.imag);
    printf("두번째 복소수: ");
    scanf("%lf %lf",&c2.real,&c2.imag);
    complex_add(c1,c2);
    return 0;
}
void complex_add(Complex c1,Complex c2){
    double real_sum,real_imag;
    real_sum = c1.real+c2.real;
    real_imag = c1.imag+c2.imag;

    printf("두 복소수의 합은 %.lf+%.lfi",real_sum,real_imag);
}
