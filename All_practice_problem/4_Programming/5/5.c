#include<stdio.h>

int main(void){
    int a;
    printf("정수를 입력하시오: ");
    scanf("%d",&a);
    printf("십의자리:%d\n일의자리:%d",a/10,a%10); 
    return 0;
}
