#include<stdio.h>

int main(void){
    int a[10][3],i,j,number;
    for(j=0;j<3;j++){
        for(i=0;i<10;i++){
            if(j==0)
                a[i][j] = i+1;
            else if(j==1)
                a[i][j] = (i+1)*(i+1);
            else
                a[i][j] =(i+1)*(i+1)*(i+1);
        }
    }
    printf("정수를 입력하시오: ");
    scanf("%d",&number);
    for(i=0;i<10;i++){
        if(number==a[i][2])
            printf("%d의 세제곱은 %d",number,a[i][0]);
    }
    return 0;
}
