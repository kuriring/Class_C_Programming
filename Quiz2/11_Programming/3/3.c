#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void array_fill(int *arr, int size);
int main(void){
	srand(time(NULL));
	int arr[100];
	array_fill(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;	
}
void array_fill(int *arr,int size){
	int i;
	for(i=0;i<size;i++)
		*(arr+i) =rand()%10; 
	for(i=0;i<size;i++)
		printf("[arr[%d]] : %d\n",i,arr[i]);	
}
