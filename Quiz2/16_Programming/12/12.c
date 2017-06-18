#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void)
{
    FILE *fp=NULL;
    char name[SIZE];
    char word[SIZE];
    char line[SIZE];
    int num=0;
    printf("파일 이름: ");
    gets(name);
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("파일오픈오류\n");
        exit(1);
    }
    printf("탐색할 단어: ");
    gets(word);
    while(!feof(fp))
    {
        num++;
        fgets(line,SIZE,fp);
            if(strstr(line,word)!=NULL)
            {
                printf("%s: %d    %s",name,num,line);
            }
    }
    fclose(fp);
    return 0;
}
