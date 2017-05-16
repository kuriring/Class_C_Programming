#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[100];
    char word[] = " ";
    char *token;
    char *context[10];
    int i, count =0;
    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = NULL;
    token = strtok(str, word);
    for(i=0; token != NULL; i++) {
       context[i] = token;
        token = strtok(NULL, word);
        count++;
    }
    for(i=0;i<count;i++)
        context[i] = tolower(context[i]);
    printf("변환된 이름 : %s %s, %s",context[1],context[2],context[0]);

    return 0;
}
