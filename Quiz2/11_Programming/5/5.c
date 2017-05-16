#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void convert(double *grades, double *scores, int size);
int main(void){
	double grades[10],score[10];
	int i;
	srand(time(NULL));
	for(i=0;i<10;i++){
		grades[i] = (rand()%44)/10.0;
		printf("%.1f\n",grades[i]);
	}
	convert(grades,score,10);
	return 0;
}

void convert(double *grades, double *scores, int size){
	int i;
	
	for(i=0; i<size;i++){
		scores[i] = grades[i]/4.3 * 100; 
		printf("%f\n",scores[i]);
	}
	
}
