#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void array_copy(int *A,int *B,int size);

int main(void){
	srand(time(NULL));
	int A[10],B[10],i;
	for(i=0;i<10;i++)
		A[i] = rand()%100;
	for(i=0;i<10;i++)
		printf("A[%d] : %d\n",i,*(A+i));
	array_copy(A,B,10);
	return 0;
}
void array_copy(int *A,int *B,int size){
	int i;
	for(i=0;i<size;i++)
		*(B+i) =*(A+i);
	for(i=0;i<size;i++)
		printf("B[%d] : %d\n",i,*(B+i));
}
