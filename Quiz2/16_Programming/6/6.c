#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100
int main(void)
{
    FILE *fp=NULL;
    char name[SIZE];
    char buf[SIZE];
    int count=0;
    int i=0;
    printf("파일 이름을 입력하세요: ");
    gets(name);
    if((fp=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"파일오픈오류\n");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(buf,SIZE,fp);
        for(i=0;buf[i]!='\0';i++)
        {
            if(isprint(buf[i]))
            count++;
        }
    }
    printf("인쇄 가능한 문자의개수는 %d개입니다.\n", count);
    return 0;
}
