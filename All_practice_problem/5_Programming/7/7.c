#include<stdio.h>

int main(void){
    float x,y,result;
    printf("체중과 키를 입력하시오(키,체중): ");
    scanf("%f %f",&x,&y);
    result = (x-100)*0.9;
    if(result > y)
        printf("저체중입니다");
    else if(result == y)
        printf("표중체중입니다");
    else
        printf("과제충입니다");
    return 0;
}
