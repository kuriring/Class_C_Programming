#include<stdio.h>
int array_equal(int a[],int b[],int size);
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
    result = array_equal(a,b,x);
    if(result ==1)
        printf("같다");
    else
        printf("다르다");
    return 0;
}
int array_equal(int a[],int b[],int size){
    int i,flag=0;
    for(i=0;i<size;i++){
        if(a[i] != b[i])
            flag++;
    }
    if(flag>0)
        return 0;
    else
        return 1;
}
