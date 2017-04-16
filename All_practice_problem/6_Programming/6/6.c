#include<stdio.h>

int main(void){
    char c;
    int x,y;
    do{
    printf("**************************\nA ---- Add\nS ---- Subtract\nM ---- Multiply\nD ---- Divide\nQ ---- Quit\n**************************\n연산을 선택하시오: \n");
    scanf(" %c",&c);
    if(c == 'Q')
        break;
    printf("두수를 공백으로 분리하여 입력하시오: \n");
    scanf("%d %d",&x,&y);
    if(c == 'A')
        printf("연산의 결과는 %d입니다\n",x+y);
    else if(c == 'S')
        printf("연산의 결과는 %d입니다\n",x-y);
    else if(c == 'M')
        printf("연산의 결과는 %d입니다\n",x*y);
    else if(c == 'D')
        printf("연산의 결과는 %d입니다\n",x/y);
    } while(1);
    return 0; 
}
