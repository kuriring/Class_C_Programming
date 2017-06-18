#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
typedef struct NODE {
    char name[SIZE];
    char num[SIZE];
    struct NODE *link;
}NODE;
int menu();
void initialize(NODE **list, NODE **next);
void add(NODE **list, NODE **prev);
void search(NODE **next, NODE **list);
void exit1(NODE **next, NODE **list);
int main(void)
{
    NODE *list = NULL;
    NODE *prev, *next;
    int men = 0;
    prev = NULL; next = NULL;
    while ((men = menu()) != 4)
    {
        getchar();
        if (men == 1)
        {
            initialize(&list, &next);
        }
        else if (men == 2)
        {
            add(&list, &prev);
        }
        else if (men == 3)
        {
            search(&next, &list);
        }
    }
    exit1(&next, &list);
    return 0;
}
int menu()
{
    int a = 0;
    printf("연결 리스트를 이용한 전화 번호부 메뉴\n");
    printf("-------------------------\n");
    printf("1. 초기화\n");
    printf("2. 전화 번호 추가\n");
    printf("3. 전화 번호 탐색\n");
    printf("4. 종료\n");
    printf("-------------------------\n");
    scanf("%d", &a);
    return a;
}
void initialize(NODE **list, NODE **next)
{
    NODE *p;
    p = *list;
    while (p != NULL)
    {
        *next = p->link;
        free(p);
        p = *next;
    }
    printf("초기화가 완료되었습니다.\n");
}
void add(NODE **list, NODE **prev)
{
    NODE *p;
    p = (NODE*)malloc(sizeof(NODE));
    printf("이름: ");
    gets(p->name);
    printf("번호: ");
    gets(p->num);
    if (*list == NULL)
    {
        *list = p;
    }
    else
    {
        (*prev)->link = p;
    }
    p->link = NULL;
    *prev = p;
}
void search(NODE **next, NODE **list)
{
    NODE *p;
    char nam[SIZE];
    printf("찾을 이름: ");
    gets(nam);
    p = *list;
    while (p != NULL)
    {
        *next = p->link;
        if (strcmp(p->name, nam) == 0)
        {
            printf("전화 번호는 %s입니다.\n", p->num);
            break;
        }
        p = *next;
    }
}
void exit1(NODE **next, NODE **list)
{
    NODE *p;
    p = *list;
    while (p != NULL)
    {
        *next = p->link;
        free(p);
        p = *next;
    }
}
