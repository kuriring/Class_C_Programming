#include<stdio.h>

int main(void){
    int a,b,c,result=0;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d",&a,&b,&c);
    result = (a>b)?a:b;
    result = (result>c)?result:c;
    printf("%d",result);
    return 0;
}
