#include<stdio.h>
int array_copy(int a[],int b[],int size);
int main(void){
    int x,i,result;
    printf("input size: ");
    scanf("%d",&x);
    int a[x];
    int b[x];
    printf("input a[arr]: ");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    printf("input b[arr]: ");
    for(i=0;i<x;i++)
        scanf("%d",&b[i]);
    array_copy(a,b,x);
}
int array_copy(int a[],int b[],int size){
    int i;
    for(i=0;i<size;i++)
        b[i] = a[i];
    for(i=0;i<size;i++)
        printf("%d",b[i]);
}
