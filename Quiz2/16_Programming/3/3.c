#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *fpr=NULL;
    FILE *fpw=NULL;
    char buff[SIZE];
    int count=0;
    if((fpr=fopen("first.bin","rb"))==NULL)
    {
        printf("잘못된 파일 열기1\n");
        exit(1);
    }
    if((fpw=fopen("second.bin","wb"))==NULL)
    {
        printf("잘못된 파일 열기2\n");
        exit(1);
    }
    while((count=(fread(buff,sizeof(char),SIZE,fpr)))!=0)
    {
        printf("%d",count); //몇 개 세었는지 보려고
    fwrite(buff,sizeof(char),count,fpw);
    }
    return 0;    
}
