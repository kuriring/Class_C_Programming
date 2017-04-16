#include<stdio.h>

int main(void){
    int x,sum=0;
    while(scanf("%d",&x) != EOF){
        sum +=x;
    }
    printf("정수의 합은 %d 입니다.\n",sum);
    return 0;
}
