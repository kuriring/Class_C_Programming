#include<stdio.h>

int main(void){
	double x,result;
	scanf("%lf",&x);
	if(x<=0)
		result =(x*x*x)-(9*x)+2;
	else
		result = (7*x)+2;
	printf("%lf",result);
	return 0;
}
