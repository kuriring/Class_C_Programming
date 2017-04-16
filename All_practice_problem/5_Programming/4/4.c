#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int x,c;
    srand( (unsigned)time(NULL) );
    printf("선택하시오(1: 가위 2: 바위 3:보)");
    scanf("%d",&x);
    c = rand()%3+1;
    printf("[Computer] = %d\n",c);
    if(x==c)
        printf("비겼음");
    else if(x==1){
        if(c==2)
            printf("졌음");
        else if(c==3)
            printf("이겼음");
    }
    else if(x==2){
        if(c==3)
            printf("졌음");
        else if(c==1)
            printf("이겼음");
    }
    else if(x==3){
        if(c==1)
            printf("졌음");
        else if(c==2)
            printf("이겼음");
    }

    return 0;
}
