#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(NULL));
    int rand_array[100],count_array[10]={0},i,j,max_number,max_int;
    for(i=0;i<100;i++)
        rand_array[i]=rand()%10;
    for(i=0;i<100;i++){
        for(j=0;j<10;j++){
            if(rand_array[i]==j)
                count_array[j]+=1;
        }
    }
    max_number=count_array[0];
    max_int=0;
    for(i=0;i<10;i++){
        if(count_array[i]>max_number){
            max_number=count_array[i];
            max_int = i;
        }
    }
    for(i=0;i<10;i++)
        printf("%d\n",count_array[i]);
    printf("[max_int]: %d",max_int);
    return 0;
}
