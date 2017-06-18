#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double get_average(int list[], int n);
int main(void){
	int list[4][4],i,j;
	srand((unsigned)time(NULL));
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		array[i][j] = rand() %101;
		}
	}
	for(i=0;i<4;i++)
		get_average(list[i],4);
	return 0;
}
double get_average(int list[], int n){
	int i;
	double sum=0.0;
	for(i=0;i<n;i++)
		sum += 
}
