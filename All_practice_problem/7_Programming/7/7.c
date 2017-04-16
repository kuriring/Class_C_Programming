#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int b_rand();
int main(void){
    int i,result,x;
    char c;
    srand(time(NULL));
    while(1){
        printf("앞면 또는 뒷면(1 또는 0): ");
        scanf("%d",&x);
        result = b_rand();
        if(x==result)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");
        printf("계속하시겠습니까?(y또는n): ");
        scanf(" %c",&c);
        if(c=='n')
            break;
    }
}
int b_rand(){
    int tmp = rand()%2;
    return tmp;
}
