#include<stdio.h>
int array_copy(int a[],int b[],int size);
int main(void){
    int size,a[100],b[100],i;
    printf("Input size: ");
    scanf("%d",&size);
    printf("Input array A: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Input array B: ");
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
    for(i=0;i<size;i++)
        printf("b[%d]: %d\n",i,b[i]);
    array_copy(a,b,size);
    return 0;
}
int array_copy(int a[],int b[],int size){
    int i;
    for(i=0;i<size;i++)
        b[i]=a[i];
    printf("Print Copy Array A\n");
    for(i=0;i<size;i++)
        printf("b[%d]: %d\n",i,b[i]);
}
