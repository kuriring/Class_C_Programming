#include<stdio.h>

int array_equal(int a[],int b[],int size);
int main(void){
    int size,a[100],b[100],i,result;
    printf("Input array size: ");
    scanf("%d",&size);
    printf("Array a Input: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Array b Input: ");
    for(i=0;i<size;i++)
        scanf("%d",&b[i]);
   result = array_equal(a,b,size);
   if(result ==0)
       printf("Wrong");
   else
       printf("Right");
    return 0;
}
int array_equal(int a[],int b[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("a[%d] : %d\n",i,a[i]);
        printf("b[%d] : %d\n",i,b[i]);
        if(a[i]!=b[i]){
            return 0;
            break;
        }
    }
    return 1;
}

