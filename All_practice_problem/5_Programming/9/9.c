#include<stdio.h>

int main(void){
    float x;
    printf("x의 값을 입력하시오: " );
    scanf("%f",&x);
    if(x<=0)
        printf("f(x)의 값은 %f",(x*x*x)-(9*x)+2);
    else
        printf("f(x)의 값은 %f",(7*x)+2);
    return 0; 
}
