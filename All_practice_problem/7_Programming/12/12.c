#include<stdio.h>
int is_prime(int i);
int main(void){
    int i;
    printf("2부터 100사이의 소수를 출력하빈다\n");
    for(i=2;i<100;i++)
        is_prime(i);
    return 0;
}
int is_prime(int i){
    int j,count;
    count =0;
    for(j=1;j<=i;j++){
        if(i%j==0)
            count++;
    }
    if(count==2)
        printf("%d ",i);
}

