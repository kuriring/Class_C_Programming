#include<stdio.h>
int is_multiple(int n,int m);
int main(void){
    int n,m;
    printf("첫번째 정수를 입력하시오: ");
    scanf("%d",&n);
    printf("두번째 정수를 입력하시오: ");
    scanf("%d",&m);
    is_multiple(n,m);
    return 0;
}
int is_multiple(int n, int m){
    if(n%m==0)
        printf("%d은 %d의 배수입니다.",n,m);
    else
        printf("%d은 %d의 배수가아닙니다.",n,m);
}
