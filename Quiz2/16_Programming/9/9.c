#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(int argc, char *argv[])
{ 
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    FILE *fp3=NULL;
    char line[SIZE];
    if((fp1=fopen(argv[1],"r"))==NULL)
    {
        printf("file open error1\n");
        exit(1);
    }
    if((fp2=fopen(argv[2],"r"))==NULL)
    {
        printf("file open error2\n");
        exit(1);
    }
    if((fp3=fopen(argv[3],"a"))==NULL)
    {
        printf("file open error3\n");
        exit(1);
    }
    while(!feof(fp1))
    {
        fgets(line,SIZE,fp1);
        fputs(line,fp3);
    }
    while(!feof(fp2))
    {
        fgets(line,SIZE,fp2);
        fputs(line,fp3);
    }
    printf("\n%s %s를 합하여 %s를 작성하였습니다.\n",argv[1],argv[2],argv[3]);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
