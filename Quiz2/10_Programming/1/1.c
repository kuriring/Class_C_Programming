#include<stdio.h>

int main(void){
    int i,days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<12;i++)
        printf("%d월은 %d일까지 있습니다\n",i+1,days[i]);
    return 0;
}
