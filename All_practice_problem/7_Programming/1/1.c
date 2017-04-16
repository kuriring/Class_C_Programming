#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void){
    int x,result,result1,result2;
    printf("정수를 입력하시오: ");
    scanf("%d",&x);
    result = even(x);
    if(result ==1 )
        printf("even()의 결과 : 짝수\n");
    else
        printf("even()의 결과 : 홀수\n");
    result1 = absolute(x);
    printf("absolute()의 결과 : %d\n",result1);
    result2 = sign(x);
    if(result2==1)
        printf("sign()의 결과 : 양수\n");
    else if(result2 == -1)
        printf("sign()의 결과 : 음수\n");
    else
        printf("sign()의 결과 : 0\n");
    return 0;
}
int even(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}
int absolute(int n){
    int tmp = abs(n);
    return tmp;
}
int sign(int n){
    if(n>0)
        return 1;
    else if(n<0)
        return -1;
    else 
        return 0;
}
