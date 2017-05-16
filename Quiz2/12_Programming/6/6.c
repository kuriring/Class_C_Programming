#include<stdio.h>
#include<string.h>
int str_upper(char *s);
int main(void){
    char s[1024];
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    str_upper(s);
    return 0;
}
int str_upper(char *s){
    int i;
    printf("변환된 문자열: ");
    for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]-32);
}
