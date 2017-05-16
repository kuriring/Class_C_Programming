#include<stdio.h>
#include<string.h>

typedef struct{
    char name[100];
    char h_n[100];
    char p_n[100];
}People;
int main(void){
    People p[5];
    int i;
    char searchName[100];
    for(i=0;i<5;i++){
        printf("=Peopel=\n");
        printf("Name: ");
        gets(p[i].name);
        printf("Home_number: ");
        gets(p[i].h_n);
        printf("Phone_number: ");
        gets(p[i].p_n);
    }
    printf("Find Name Input: ");
    gets(searchName);
    for(i=0;i<5;i++){
        if(strcmp(searchName,p[i].name)==0){
            printf("Home_number = %s\n",p[i].h_n);
            printf("Phone_number = %s\n",p[i].p_n);
        }
    }
    return 0;
}
