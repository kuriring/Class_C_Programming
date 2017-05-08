#include<stdio.h>

int main(void){
    int arr[5]={1,2,3,4,5},i;
    int *ptr = arr;
    printf("%p\n",&ptr);
    for(i=0;i<5;i++){
        *ptr +=2;
        ptr++;
    }
    printf("%p\n",&ptr);
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
    return 0;
}
