#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int array_sum(int *A,int size);
int main(void){
	int A[10],i,result;
	srand(time(NULL));
	for(i=0;i<10;i++)
		*(A+i) = rand()%200;
	result = array_sum(A,10);
	for(i=0;i<10;i++)
		printf("A[i] = %d\n",*(A+i));
	printf("[sum] : %d",result);
	return 0;
}
int array_sum(int *A,int size){
	int i,sum=0;
	for(i=0;i<10;i++)
		sum += *(A+i);
	return sum;
}
