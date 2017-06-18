#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main(void)
{
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    char name[SIZE];
    double korean, math, english;
    korean=0.0;math=0.0;english=0.0;
    if((fp1=fopen("grade.txt","r"))==NULL)
    {
        printf("잘못된 입력1\n");
        exit(1);
    }
    if((fp2=fopen("average.txt","a"))==NULL)
    {
        printf("잘못된 입력2\n");
        exit(1);
    }
    fscanf(fp1,"%*s\t%*s\t%*s\t%*s",name,&korean,&math,&english); //첫줄스캔하지않기위해서 *이용
    fprintf(fp2,"이름    평균\n");
    while(!feof(fp1))
    {
        fscanf(fp1,"%s\t%lf\t%lf\t%lf",name,&korean,&math,&english);
        fprintf(fp2,"%s\t%.2lf\n",name,(korean+math+english)/3);//.2lf는소수점둘째까지
    }
    return 0;
}
