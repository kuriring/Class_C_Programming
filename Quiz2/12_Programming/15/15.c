#include<stdio.h>
#include<string.h>

int main(void){
    char s[1024];
    int x,y;
    printf("연산을 입력하시오: ");
    scanf("%s %d %d",s,&x,&y);
    if(!strcmp(s,"add"))
        printf("연산의 결과 %d",x+y);
    else if(!strcmp(s,"sub"))
        printf("연산의 결과 %d",x-y);
    else if(!strcmp(s,"mul"))
        printf("연산의 결과 %d",x*y);
    else if(!strcmp(s,"div"))
        printf("연산의 결과 %d",x/y);
}
