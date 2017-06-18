#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main(void)
{
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    int i;
    double arr[SIZE];
    srand((unsigned)time(NULL));
 
    if((fp1=fopen("first.bin","wb"))==NULL)
    {
        printf("파일 오픈 실패1\n");
        exit(1);
    }
    if((fp2=fopen("abc.txt","w"))==NULL)
    {
        printf("파일 오픈 실패2\n");
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        arr[i]=(double)rand()/RAND_MAX;
    } 
    fwrite(arr,sizeof(double),SIZE,fp1);
    for(i=0;i<SIZE;i++)
    {
        fprintf(fp2,"%lf",arr[i]);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
 
}
