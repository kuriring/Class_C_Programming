#include<stdio.h>

int main(void){
	int i,count,result,j;
	for(i=2;i<=100;i++){
		count=0;
		for(j=1;j<=i;j++){
			result = i%j;
			if(result==0)
				count++;
			else
				continue;
		}
		if(count==2)
			printf("%d ",i);
	}
	return 0;
}
