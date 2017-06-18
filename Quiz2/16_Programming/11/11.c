#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
typedef struct BOOK {
    char name[SIZE];
    char author[SIZE];
    char company[SIZE];
} book;
int menu(void);
void add(FILE *fp);
void find(FILE *fp);
int main(void)
{
    int num = 0;
    FILE *fp = NULL;
    if ((fp=fopen("booklist.bin","a+"))==NULL)
    {
        printf("파일오픈실패\n");
        exit(1);
    }
    while (1)
    {
        num = menu();
        if (num == 1)
            add(fp);
        else if (num == 2)
            find(fp);
        else
            break;
    }
    fclose(fp);
    return 0;
}
int menu(void)
{
    int i = 0;
    printf("메뉴\n");
    printf("1. 추가\n");
    printf("2. 탐색\n");
    printf("3. 종료\n");
    printf("번호를 입력하세요: ");
    scanf("%d", &i);
    getchar();
    return i;
}
void add(FILE *fp)
{ 
    book a;
    printf("도서의 이름: ");
    gets(a.name);
    printf("저자: ");
    gets(a.author);
    printf("출판사명: ");
    gets(a.company);
    fseek(fp, 0, SEEK_END);
    fwrite(&a, sizeof(book), 1, fp);
}
void find(FILE *fp)
{
    char arr[SIZE];
    book find;
    printf("도서의 이름을 입력하세요: ");
    gets(arr);
    fseek(fp, 0, SEEK_SET);
    while (!feof(fp))
    {
        fread(&find, sizeof(book), 1, fp);
        if (strcmp(find.name,arr)==0)
        {
            printf("저자: %s\n",find.author);
            printf("출판사명: %s\n",find.company);
            break;
        }
    }
}
