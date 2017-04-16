#include<stdio.h>

int main(void){
    int i,sum=0;
    for(i=0;i<100000;i++){
        if(sum<10000){
            sum += i;
    }
        else{
            printf("1부터 %d까지의 합이 %d입니다.",i-2,sum-i+1);
            break;
        }
    }
    return 0;
}
