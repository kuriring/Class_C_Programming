#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
    int num;
    struct NODE *link;
}NODE;
int main(void)
{
    NODE *list=NULL;
    NODE *prev, *p, *next;
    int a=0;
    while(1)
    {
        printf("양의 정수를 입력하세요(종료는-1): ");
        scanf("%d",&a);
        if(a==-1)
            break;
        p=(NODE*)malloc(sizeof(NODE));
        p->num=a;
        if(list==NULL)
        {list=p;}
        else
        {prev->link=p;}
        p->link=NULL;
        prev=p;
    }
    p=list;
    while(1)
    {
    if(p==NULL)
        {printf("NULL\n");
        break;}
    printf("%d->",p->num);
    p=p->link;
    }
    p=list;
    while(p!=NULL)
    {
        next=p->link;
        free(p);
        p=next;
    }
    return 0;
 
}
