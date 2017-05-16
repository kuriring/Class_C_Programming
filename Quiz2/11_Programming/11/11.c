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
	merge(A,B,C,10);
	for(i=0;i<20;i++)
		printf("C[%d] = %d\n",i,C[i]);
	return 0;
}
void merge(int *A, int *B, int *C,int size){
        int i, j=0, k=0;
        for(i=0; i<size*2; i++){
               if(j!=size&& k!=size){
                       if(A[j]>B[k]){
                              C[i]=B[k];
                              k++;
                       }
                       else{
                              C[i]=A[j];
                              j++;
                       }
               }
               else{
                       if(j==size){
                              C[i]=B[k];
                              k++;
                       }
                       else{
                              C[i]=A[j];
                              j++;
                       }
               }
        }
}
