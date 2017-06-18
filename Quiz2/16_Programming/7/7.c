#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fp=NULL;
    char name[SIZE];
    char line[SIZE];
    int count1,count2,i;
    printf("파일 이름을 입력하세요: ");
    gets(name);
    if((fp=fopen(name,"w"))==NULL)
    {
        printf("파일 열기 오류\n");
        exit(1);
    }
    while(1)
    {
    line[0]='\0';
    count1=0;count2=0;
    fgets(line,SIZE,stdin);
    for(i=0;line[i]!='\0';i++)
    {
        count1++;
        if((line[i]==' ')||(line[i]=='\t')||(line[i]=='\n'))
        {count2++;} 
    }
    if(count1==count2)
        break;
    fputs(line,fp);
    }
    fclose(fp);
    return 0;
}
