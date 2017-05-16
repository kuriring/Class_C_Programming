#include<stdio.h>

int main(void){
    char s[100];
    int count,i;
    printf("텍스트를 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==','||s[i]=='.')
            count++;
    }
    printf("구두점의 개수는 %d 입니다",count);
    return 0;
}
