#include<stdio.h>

int main(void){
    int i,n,r,mul=1;
    printf("n의 값: ");
    scanf("%d",&n);
    printf("r의 값: ");
    scanf("%d",&r);
    for(i=0;i<=r+1;i++){
        mul *= n-i;
    }
    printf("순열의 값은 %d입니다.",mul);
    return 0;
}
