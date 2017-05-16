#include<stdio.h>
#include<string.h>

int str_chr(char *s,int c);
int main(void){
    char s[1024],c;
    int i,result;
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    printf("갯수를 셀 문자를 입력하시오: ");
    scanf("%c",&c);
    result=str_chr(s,c);
    printf("%c의 개수: %d",c,result);
    return 0;
}
int str_chr(char *s,int c){
    int size,i,count=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==c)
            count++;
    }
    return count;
}
