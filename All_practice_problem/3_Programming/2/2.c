#include<stdio.h>

int main(void){
    int a;
    printf("16진수 정수를 입력하시오:");
    scanf("%x",&a);
    printf("8진수로는 %o입니다.\n10진수로는 %d입니다.\n16진수로는 0x%x입니다.",a,a,a);
    return 0;
}
