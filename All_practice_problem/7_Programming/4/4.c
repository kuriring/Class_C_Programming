#include<stdio.h>
int get_tax(int income);

int main(void){
    int x;
    printf("소득세를 입력하시오(만원): ");
    scanf("%d",&x);
    get_tax(x);
    return 0;
}
int get_tax(int income){
    if(income<=1000)
        printf("소득세는 %.0f입니다",income*0.08);
    else
        printf("소득세는 %.0f입니다",income*0.1);
}
