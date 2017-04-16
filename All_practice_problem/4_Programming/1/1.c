#include<stdio.h>

int main(void){
    int a,b;
    printf("2개의 정수를 입력하시오: ");
    scanf("%d %d",&a,&b);
    printf("목:%d 나머지:%d",a/b,a%b); 
    return 0;
}
