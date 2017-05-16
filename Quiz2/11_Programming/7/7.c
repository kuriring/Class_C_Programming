#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void array_add(int *A, int *B, int *C, int size);

int main(void){
	srand(time(NULL));
	int A[10],B[10],C[10],i;
	for(i=0;i<10;i++)
		*(A+i) = rand()%200;
	for(i=0;i<10;i++)
		*(B+i) = rand()%100;
	array_add(A,B,C,10);
	return 0;
}
void array_add(int *A, int *B, int *C, int size){
	int i;
	for(i=0;i<10;i++)
		*(C+i) = *(B+i)+*(A+i);
	for(i=0;i<10;i++)
		printf("[월급] : %d\n[보너스] : %d\n[지금급액] : %d\n------\n",*(A+i),*(B+i),*(C+i));
}
