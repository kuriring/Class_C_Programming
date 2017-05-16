#include <stdio.h>

typedef struct{
    char title[50];
    char reciver[20];
    char sender[20];
    char comment[100];
    char date[20];
    int priority;
}Email;
int main(void){
    Email m;
    printf("title: ");
    gets(m.title);
    printf("reciver: ");
    gets(m.reciver);
    printf("sender: ");
    gets(m.sender);
    printf("comment: ");
    gets(m.comment);
    printf("date: ");
    gets(m.date);
    printf("priority: ");
    scanf("%d",&m.priority);
    printf("title: %s\nreciver: %s\nsender: %s\ncomment: %s\ndate: %s\npriority: %d",m.title,m.reciver,m.sender,m.comment,m.date,m.priority);
    return 0;
}
