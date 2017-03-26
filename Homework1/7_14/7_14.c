#include<stdio.h>

int main(void){
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d",&x);
	do{
		printf("%d",x%10);
		x=x/10;
	}
	while(x>0);
	return 0;
}
