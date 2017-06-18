#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int size=0;
    int i;
    int *p;
    int sum=0;
    printf("정수의 개수: ");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++)
    {
        printf("양의 정수를 입력하세요: ");
        scanf("%d",&p[i]);
    }
    for(i=0;i<size;i++)
    {
        sum+=p[i];
    }
    printf("합은 %d입니다.\n",sum);
    free(p);
    return 0;
}
