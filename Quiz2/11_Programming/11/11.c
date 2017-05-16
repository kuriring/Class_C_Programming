#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void merge(int *A,int *B,int *C,int size);
int main(void){
	int A[10],B[10],C[20],i;
	srand(time(NULL));
	for(i=0;i<10;i++){
		A[i] = rand()%10;
		B[i] = rand()%10;
	}
	merge(A,B,C,20);
	return 0;
}
void merge(int *A,int *B,int *C,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<10;j++){
			if(A[i]>b 
		}
	}
}
