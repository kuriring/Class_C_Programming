#include<stdio.h>
#include<math.h>

#define pie 3.141592
double sin_degree(double degree);
int main(void){
    double degree=0;
    sin_degree(degree);
    return 0;
}
double sin_degree(double degree){
    int i;
    for(i=0;i<=180;i++){
        degree = sin((pie*i)/180.0);
        if(i%10==0)
            printf("sin(%d)의 값은%f\n",i,degree);
    }
}
