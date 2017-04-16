#include<stdio.h>

int main(void){
    float a;
    int result;
    printf("키를 입력하시오: ");
    scanf("%f",&a);
    result = a / 2.54 /12;
    printf("%.0fcm는%d피트 %f인치입니다.",a,result,(a/2.54)-result*12);
    return 0; 
}
