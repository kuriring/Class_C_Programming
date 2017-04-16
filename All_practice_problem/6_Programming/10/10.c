#include<stdio.h>

int main(void){
    float x,result=1;
    int y,i;
    printf("실수의 값을 입력하시오: ");
    scanf("%f",&x);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d",&y);
    for(i=0;i<y;i++)
        result *=x;
    printf("결과값은 %f",result);
    return 0;
}
