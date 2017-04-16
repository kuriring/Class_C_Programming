#include<stdio.h>

int sum=0;
int sub=0;
int mul=0;
int div=0;
int count_sum(int a,int b);
int count_sub(int a,int b);
int count_mul(int a,int b);
int count_div(int a,int b);
int main(void){
    int x,y;
    char c;
    while(1){
        printf("연산을 입력하시오: ");
        scanf("%d %c %d",&x,&c,&y);
        if(c == '+'){
            count_sum(x,y);
            printf("덧셈은 총 %d번 실행되었습니다.\n",sum);
        }
        else if(c == '-'){
            count_sub(x,y);
            printf("뺄셈은 총 %d번 실행되었습니다.\n",sub);
        }
        else if(c == '*'){
            count_mul(x,y);
            printf("곱셈은 총 %d번 실행되었습니다.\n",mul);
        }
        else if(c == '/'){
            count_div(x,y);
            printf("나눗셈은 총 %d번 실행되었습니다.\n",div);
        }
        else{
            printf("잘못된 연산입니다.");
            break;
        }
    }
    return 0; 
}

int count_sum(int a,int b){
    printf("연산결과 : %d\n",a+b);
    sum++;
}
int count_sub(int a,int b){
    printf("연산결과 : %d\n",a-b);
    sub++;
}
int count_mul(int a,int b){
    printf("연산결과 : %d\n",a*b);
    mul++;
}
int count_div(int a,int b){
    printf("연산결과 : %d\n",a/b);
    div++;
}
