#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int search(int *A,int size,int search_value);
int main(void){
	int A[10],i;
	srand(time(NULL));
	for(i=0;i<10;i++){
		if(i==4)
			*(A+i) =200;
		else
			*(A+i) = rand()%200+74;
		printf("A[%d] = %d\n",i,*(A+i));
		}
	search(A,10,200);
	return 0; 
}
int search(int *A,int size,int search_value){
	int i;
	for(i=0;i<size;i++){
		if(*(A+i) == search_value)
			printf("[search_value]가 있는 index는 %d",i);
	}
	return 0;
}
