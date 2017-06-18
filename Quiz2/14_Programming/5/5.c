#include<stdio.h>
#include<string.h>

void sort_strings(char *array[], int size);
void bouble_sort(char **array);
int main(void){
	int i,count;
	char *array[3]={"mycopy","src","dst"};
	for(i=0; i<3;i++)
		printf("%s \n",*(array+i));
	sort_strings(array,3);
	for(i=0; i<3;i++)
		printf("%s \n",*(array+i));
	return 0;
}
void sort_strings(char *array[],int size){
	char * tmp;
	int min_index,i,j;
	for(i=0;i<size;i++){
		min_index =i;
		tmp =*(array+i);
		for(j=i+1; j<size;j++){
			if(strcmp(*(array+min_index), *(array+j)) >0){
				tmp = *(array+j);
				min_index= j;
			}
		}
		*(array+min_index) = *(array+i);
		*(array+i)=tmp ;
	}
}
