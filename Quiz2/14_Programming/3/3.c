#include<stdio.h>
void pr_str_array(char **dp,int n);
int main(void){
	char *dp[10]={"늦게라도 하는게 안하는것보다는 낫다","천생연분","똥묻은 개 겨묻은개 나무란다.","백문이 불여일견","부전자전","호랑이도 제말하면 온다","그림의 떡","유유상종","금강산도 식후경","용두사미"};	
	pr_str_array(dp,10);
	return 0;
}
void pr_str_array(char **dp, int n){
	int i;
	for(i=0;i<10;i++)
		printf("%s\n",*(dp+i));
}
