#include<stdio.h>
typedef struct{
    int number;
    char name[100];
    char p_n[100];
    int age;
}Employee;
int main(void){
    Employee em[10];
    int i;
    for(i=0;i<10;i++){
        printf("Input number: ");
        scanf("%d",&em[i].number);
        getchar();
        printf("Input name: ");
        gets(em[i].name);
        printf("Input phone_number: ");
        gets(em[i].p_n);
        printf("Input age: ");
        scanf("%d",&em[i].age);
        getchar();
    }
    printf("Find 20<x<30 name!!!!\n");
    for(i=0;i<10;i++)
        if(em[i].age>=20&&em[i].age<=30)
            printf("%s\n",em[i].name);
    return 0;
}
