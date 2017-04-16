#include<stdio.h>

int main(void){
    unsigned int result;
    char c1,c2,c3,c4;
    printf("첫번째 문자: ");
    scanf("%c",&c1);
    printf("두번째 문자: ");
    scanf(" %c",&c2);
    printf("세번째 문자: ");
    scanf(" %c",&c3);
    printf("네번째 문자: ");
    scanf(" %c",&c4);
    result = c1<<24 | c2<<16 | c3 <<8| c4;
    printf("%x",result);
    return 0;
}
