#include<stdio.h>
void set_proverb(char **q, int n);
int main(void){
	int x;
	char * verb;
	printf("몇 번째 속담을 선택하시겠습니까? ");
	scanf("%d",&x);
	set_proverb(&verb,x);
	printf("selected proverb = %s\n",verb);
	return 0;
}
void set_proverb(char **q, int n){
	char *array[10] = {"늦게라도 하는게 안하는것보다는 낫다","천생연분","똥묻은 개 겨묻은개 나무란다.","백문이 불여일견","부전자전","호랑이도 제말하면 온다","그림의 떡","유유상종","금강산도 식후경","용두사미"};
	*q = array[n-1];
}
