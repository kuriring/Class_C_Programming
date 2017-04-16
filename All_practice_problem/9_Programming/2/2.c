#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int arr[10],i,j,k,z,tmp;
    srand(time(NULL));
    for(i=0;i<10;i++)
        arr[i]=rand();
    //bouble sort
    for(j=0;j<9;j++){
        for(k=0; k<9;k++){
            if(arr[k]>arr[k+1]){
                tmp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1]= tmp;
            }
        }
    }
    printf("최솟값은 %d\n최대값은 %d",arr[0],arr[9]);
    return 0;
}
