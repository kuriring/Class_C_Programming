#include<stdio.h>
void get_sum_diff(int x,int y, int *p_sum, int *p_diff);
int main(void){
	int x,y,*p_sum=0,*p_diff=0;
	printf("Input Two number: ");
	scanf("%d %d",&x,&y);
	get_sum_diff(x,y,&p_sum,&p_diff);
	printf("[두수의 합]: %d\n",p_sum);
	printf("[두수의 차]: %d",p_diff);
	return 0;
}
void get_sum_diff(int x, int y, int *p_sum,int *p_diff){
	*p_sum = x+y;
	*p_diff =x-y;
}
