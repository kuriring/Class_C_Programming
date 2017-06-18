#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void set_max_ptr(int array[], int size, int **max);
int main(void){
	int array[10],i, *max;
	srand(time(NULL));
	for(i=0;i<10;i++)
		array[i] = rand()%10;
	for(i=0;i<10;i++)
		printf("[%d]번째 배열의 값 : %d\n",i,*(array+i));
	set_max_ptr(array,10,&max);
	printf("가장 큰 수의 값은 : %d", *max);
	return 0;
}
void set_max_ptr(int *array, int size, int **max){
	int i;
	*max = array;
	for(i=1; i<size;i++){
	if(**max <= *(array+i))
		**max = *(array+i);		
	}
}
