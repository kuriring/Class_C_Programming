#include<stdio.h>
int print_value(int n);
int main(void){
    int x;
    while(1){
    printf("값을 입력하시오(종료는 음수): ");
    scanf("%d",&x);
    if(x<0)
        break;
    else
        print_value(x);
    printf("\n");
    }
}
int print_value(int n){
    int i;
    for(i=0;i<n;i++)
        printf("*");
}
