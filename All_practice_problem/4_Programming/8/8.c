#include<stdio.h>

#define pie 3.141592

int main(void){
    double r;
    scanf("%lf",&r);
    printf("[A]= %lf\n[V]= %lf",4.0*pie*r*r,(4.0/3.0)*pie*r*r*r);
    return 0;
}
