#include<stdio.h>

int main(void){
    float a,b;
    printf("질량: ");
    scanf("%f",&a);
    printf("속도: "); 
    scanf("%f",&b);
    printf("운동에너지:%f",0.5*a*b*b);
    return 0;
}
