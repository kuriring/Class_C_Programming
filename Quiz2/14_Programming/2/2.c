#include<stdio.h>
int get_sum(int array[], int size);
int main(void){
	int array[3][6]={{10,10,10,10,10,10},{10,10,10,10,10,10},{10,10,10,10,10,10}};
	int i,sum=0;
	for(i=0; i<3;i++)
		sum+=get_sum(array[i],sizeof(array[i])/sizeof(array[i][0]));
	printf("총합은 : %d",sum); 
	return 0;
}
int get_sum(int array[], int size){
	int i,sum=0;
	for(i=0;i<size;i++)
		sum +=array[i];
	return sum;
}
