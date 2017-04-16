#include<stdio.h>
int is_leap(int year);

int main(void){
    int x;
    printf("연도를 입력하시오: ");
    scanf("%d",&x);
    is_leap(x);
    return 0;
}
int is_leap(int year){
    if(year%4==0 && year%100!=0 || year%400 ==0)
        printf("%d년은 366일입니다.",year);
    else
        printf("%d년은 356일입니다.",year);
}
