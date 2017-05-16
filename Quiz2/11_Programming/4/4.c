#include<stdio.h>
void array_print(int *arr, int size);
int main(void){
	int arr[5]={1,2,3,4,5};
	array_print(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
void array_print(int *arr, int size){
	int i;
	printf("A[]={");
	for(i=0; i<size; i++){
		if(i==size-1)
			printf("%d",*(arr+i));
		else
			printf("%d ,",*(arr+i));
	}
	printf("}");
}
