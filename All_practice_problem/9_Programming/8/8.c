#include<stdio.h>
#include<math.h>
int main(void){
    int i;
    double a[10],sum=0,sum1=0,avr,avr1;
    for(i=0;i<10;i++){
        printf("데이터를 입력하세요: ");
        scanf("%lf",&a[i]);
    }
    for(i=0;i<10;i++)
        sum += a[i];
    avr = sum/10;
    for(i=0;i<10;i++)
        sum1 = (a[i]-avr)*(a[i]-avr);
    avr1 = sqrt(sum1/10);
    printf("평균값은 %lf",avr);
    printf("표준편차값은 %lf",avr1);
    return 0;
}
