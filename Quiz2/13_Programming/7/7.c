#include<stdio.h>
typedef struct{
    char name[100];
    int calories;
}Food;
int main(void){
    Food fa[10];
    int i=0,j,sum=0;
    while(i<3){
        printf("Food Name Input: ");
        gets(fa[i].name);
        printf("calories: ");
        scanf("%d",&fa[i].calories);
        getchar();
        i++;
    }
    for(j=0;j<i;j++)
        sum +=fa[j].calories;
    printf("All Food calories = %d",sum);
    return 0;
}
