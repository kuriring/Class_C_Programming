#include<stdio.h>
#include<string.h>
int str_chr(char *s);
int main(void){
    char s[1024];
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    str_chr(s);
    return 0;
}
int str_chr(char *s){
    int arr[26]={0},i;
    for(i=0;s[i]!='\0';i++){
       arr[(int)s[i]-97]++; 
    }
    for(i=0;i<26;i++)
        printf("[%c] : %d\n",i+97,arr[i]);
}
