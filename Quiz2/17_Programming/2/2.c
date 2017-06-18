#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count=0;
    char **p=NULL; int i;
    printf("문자열의 개수: ");
    scanf("%d",&count);
    p=(char**)malloc(sizeof(char*)*count);
    for(i=0;i<count;i++)
    {
        p[i]=(char*)malloc(sizeof(char)*100);
    }
    getchar();
    for(i=0;i<count;i++)
    {
    printf("문자열을 입력하세요: ");
    gets(p[i]);
    }
    printf("\n");
    for(i=0;i<count;i++)
    {
    puts(p[i]);
    }
    for(i=0;i<count;i++)
    {
    free(p[i]);
    }
    free(p);
    return 0;
}
