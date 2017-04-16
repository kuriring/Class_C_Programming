#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x%y==0)
        printf("약수입니다");
    else
        printf("약수가 아닙니다");
    return 0;
}
