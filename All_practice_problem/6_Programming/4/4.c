#include<stdio.h>

int main(void){
    int x,i,j;
    printf("정수를 입력하시오: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
