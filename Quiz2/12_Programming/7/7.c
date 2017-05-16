#include<stdio.h>
#include<string.h>
#include<ctype.h>
int get_response(char *prompt);
void lower(char *prompt);
int main(void){
    char s[1024];
    int result;
    printf("게임을 하시겠습니까? ");
    fgets(s,sizeof(s),stdin);
    lower(s);
    result = get_response(s);
    if(result == 0)
        printf("긍정적인 답변");
    else
        printf("부정적인 답변");
    return 0;
}
int get_response(char *prompt){
    if(strcmp(prompt,"yes\n")==0)
        return 0;
    else if(strcmp(prompt,"no\n")==0)
        return 1;
}
void lower(char *prompt){
    int i;
    for(i=0; prompt[i]!='\0';i++)
        prompt[i]=tolower(prompt[i]);
}
