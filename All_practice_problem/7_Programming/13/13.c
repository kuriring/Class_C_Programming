#include<stdio.h>

double factorial(double i);
int main(void){
    int x,i;
    double result, sum=1.0;
    printf("어디까지계산할까요?");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        result =1/factorial(i);
        sum += result;
    }
    printf("%lf",sum);
    return 0;
}
double factorial(double i){
    double k,j=1;
    for(k=1;k<=i;k++)
        j*=k;
    return j;
}
