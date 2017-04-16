#include<stdio.h>

int main(void){
    float a;
    printf("화씨값을 입력하시오: ");
    scanf("%f",&a);
    printf("섭씨값은 %f도입니다.",(5.0/9.0)*(a-32.0));
    return 0;
}
