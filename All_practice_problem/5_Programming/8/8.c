#include<stdio.h>

int main(void){
    int times,age;
    printf("현재 시간과 나이를 입력하시오(시간,나이): ");
    scanf("%d %d",&times,&age);
    if(times <= 17){
        if(age >=3 && age<=12 || age>=65)
            printf("요금은 25000원 입니다");
        else
            printf("요금은 34000원 입니다");
    }
    else
        printf("요금은 10000원입니다");
    return 0;
}
