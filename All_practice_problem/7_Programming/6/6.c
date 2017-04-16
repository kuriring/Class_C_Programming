#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int b_rand();
int main(void){
    srand(time(NULL));
    b_rand();
    return 0;
}
int b_rand(){
    int i;
    for(i=0;i<5;i++)
        printf("%d ",rand()%2);
}
