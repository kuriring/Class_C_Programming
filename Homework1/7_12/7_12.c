#include<stdio.h>

int main(void){
	int x,i,num0=0,num1=1,sum=0;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		printf("%d",sum);
		num0 = sum+num1;
		sum = num1;
		num1 = num0;
	}
	return 0;
}
