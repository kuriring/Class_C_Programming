#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    srand(time(NULL));
    int x[10],i,max_number,min_number;
    for(i=0;i<10;i++)
        x[i]=rand();
    max_number = x[0];
    min_number = x[0];
    for(i=0;i<10;i++){
        if(x[i]>max_number)
            max_number=x[i];
        else if(x[i]<min_number)
            min_number=x[i];
    }
    /*
    for(i=0;i<10;i++)
        printf("[x[%d]] : %d\n",i,x[i]);
    */
    printf("[max_number] : %d\n",max_number);
    printf("[min_number] : %d",min_number);
    return 0;
}
