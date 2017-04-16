#include<stdio.h>

#define SQMETER_PER_PYEONG 3.3058
int main(void){
    double  a;
    printf("평을 입력하세요: ");
    scanf("%lf",&a);
    printf("%lf평방미터입니다.",a*SQMETER_PER_PYEONG);
    return 0;
}
