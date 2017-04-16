#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 100
int main(void){
    srand(time(NULL));
    int a[size],i,count,j,max_length=0,max_number=0;
    for(i=0;i<size;i++)
        a[i]=rand()%10;
   /* 
    for(i=0;i<size;i++)
        printf("a[%d]=%d\n",i,a[i]);
    */
    for(i=0;i<size;i++){
        count=0;
        for(j=0;j<size;j++){
            if(i==j)
                continue;
            if(a[i]==a[j])
                count++;
        }
        if(count>max_length)
            max_number = a[i];
    }
    printf("%d",max_number);
    return 0;
}
