#include<stdio.h>

int main(void){
    int count=0,sum=0;
    do{
        if(count%3==0)
            sum+=count;
        count++;
    }
    while(count<100);
    printf("%d",sum);
    return 0;
}
