#include<stdio.h>
#include<string.h>

int main(void){
    char s[1024],tmp;
    int size;
    printf("텍스트를 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    size =strlen(s);
    if(s[size-2]=='.'){
       if(s[0]>='a'&&s[0]<='z')
           s[0] =(int)s[0]-32;
    printf("결과 텍스트 출력: %s",s);
    }
    else if(s[size-2]!='.'){
       if(s[0]>='a'&&s[0]<='z')
           s[0] =(int)s[0]-32;
        s[size-1]='.';
    printf("결과 텍스트 출력: %s",s);
    }
    return 0;
}
