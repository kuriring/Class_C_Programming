#include<stdio.h>

int main(void){
    int x,y,z,min;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d",&x,&y,&z);
    min =x;
    if(x>=y){
        min = y;
        if(y>=z)
            min =z;
    }
    else{
        min =x;
        if(x>=z)
            min=z;
    }
    printf("%d",min);
    return 0; 
}
