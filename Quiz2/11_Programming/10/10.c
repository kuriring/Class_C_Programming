#include<stdio.h>
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int main(void){
	int x,y,*p_lcm,*p_gcd;
	scanf("%d %d",&x,&y);
	get_lcm_gcd(x,y,&p_lcm,&p_gcd);
	printf("%d\n",p_gcd);
	printf("%d",p_lcm);
	return 0;
}
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd){
	int x_z= x;
	int y_z= y;
	
	int mod= x%y;
	while(mod>0){
		x = y;
		y = mod;
		mod = x%y;
	}
	*p_gcd = y;
	*p_lcm = (x_z*y_z)/y;
}
