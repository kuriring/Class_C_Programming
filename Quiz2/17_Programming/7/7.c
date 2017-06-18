#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
typedef struct NODE{
    char name[SIZE];
    int year;
    struct NODE *link;
}NODE;
int menu();
void add(NODE **list, NODE **prev);
void printing(NODE **list);
void exit1(NODE **list,NODE **next);
int main(void)
{
    int cho=0;
    NODE *list=NULL;
    NODE *p,*next,*prev;
    while((cho=menu())!=3){
    getchar();
    if(cho==1)
    {
        add(&list,&prev);
    }
    else if(cho==2)
    {
        printing(&list);
    }
    else if(cho==3)
    {
        exit1(&list,&next);
    break;
    }
    }
    return 0;
}
int menu()
{
    int men=0;
    printf("----------------------\n");
    printf("1. 영화 정보 추가\n");
    printf("2. 영화 정보 출력\n");
    printf("3. 종료\n");
    printf("----------------------\n");
    printf("번호를 선택하세요: ");
    scanf("%d",&men);
    return men;
}
void add(NODE **list, NODE **prev)
{
    NODE *p=NULL;
    p=(NODE*)malloc(sizeof(NODE));
        printf("영화의 제목을 입력하세요: ");
        gets(p->name);
        printf("영화의 개봉 연도를 입력하세요: ");
        scanf("%d",&(p->year));
        if(*list==NULL)
        {*list=p;}
        else
        {(*prev)->link=p;}
            p->link=NULL;
            *prev=p;
}
void printing(NODE **list)
{
    NODE *p=NULL;
    p=*list;
    while(p!=NULL)
    {
        printf("제목: %s\n",p->name);
        printf("년도: %d\n",p->year);
        p=p->link;
    }
}
void exit1(NODE **list,NODE **next)
{
    NODE *p=NULL;
    p=*list;
    while(p!=NULL)
    {
        *next=p->link;
        free(p);
        p=*next;
    }
}
