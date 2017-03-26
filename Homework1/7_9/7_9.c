#include<stdio.h>

int main(void){
	int i,sum=0,count=0;
	for(i=1;i<10000;i++){
		sum +=i;
		count++;
		if(sum>10000){
			sum -=i;
			count--;
		}
		
	}
	printf("1부터%d까지의 합이 %d입니다.",count,sum);
	return 0;
}
