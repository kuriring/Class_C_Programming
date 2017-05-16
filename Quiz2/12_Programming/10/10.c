#include<stdio.h>
#include<ctype.h>
#include<string.h>
void lower(char *s,int size);
int main(void){
    char s[100];
    int size,count=0,i;
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    size=strlen(s);
    lower(s,size);
    for(i=0;i<size-1;i++){
        if(s[i]==s[size-2-i])
            count++;
    }
    if(count==size-1)
        printf("회문입니다.");
    else
        printf("회문이 아닙니다.");
    return 0;
}
void lower(char *s,int size){
    int i;
    for(i=0;i<size-1;i++)
        s[i]=tolower(s[i]);
}
