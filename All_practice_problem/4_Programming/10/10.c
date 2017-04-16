#include<stdio.h>

int main(void){
    int x,y,result;
    scanf("%d %d",&x,&y);
    result = (x>0 && y>0)? 1:0;
    result = (x<0 && y>0)? 2:result;
    result = (x<0 && y<0)? 3:result;
    result = (x>0 && y<0)? 4:result;
    printf("%d사분면",result);
    return 0;
}
