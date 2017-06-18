#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void)
{
    FILE *fp = NULL;
    char arr[SIZE];
    char name[SIZE];
    int num = 1;
    printf("파일 이름: ");
    gets(name);
    if ((fp=fopen(name,"r"))==NULL)
    {
        printf("파일 오픈 실패\n");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(arr, SIZE, fp);
        if (arr[strlen(arr) - 1] == '\n')
            {
                arr[strlen(arr) - 1] = '\0';
            } 
        printf("%6d: ", num); 
        puts(arr);
        num++;
    }
    fclose(fp);
    return 0;
}
