#include<stdio.h>

int main(void){
    int c,i;
    printf("카운터의 초기값을 입력하시오: ");
    scanf("%d",&c);
    for(i=c;i>=0;i--){
        if(i==0)
            printf("\a");
        else
            printf("%d ",i);
    }
    return 0;
}
