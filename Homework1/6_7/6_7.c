#include<stdio.h>

int main(void){
	int x,y,result;
	printf("체중과 키를 입력하시오(키,체중):");
	scanf("%d %d",&x,&y);
	result = (x-100) * 0.9;
	if(result<y)
		printf("과체중입니다.");
	else if(result>y)
		printf("저체중입니다.");
	else
		printf("표준체중입니다.");
	return 0;
}
