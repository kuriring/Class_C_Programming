#include<stdio.h>

int main(void){
    int x,i;
    while(1){
    printf("막대의 높이(종료: -1): ");
    scanf("%d",&x);
    if(x==-1)
        break;
    for(i=0;i<x;i++)
        printf("*");
    printf("\n");
    }
    return 0;
}
