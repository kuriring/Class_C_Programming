#include<stdio.h>

int main(void){
    int a[3][5]={{12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21}},i,j,sum;
    for(i=0;i<3;i++){
        sum = 0;
        for(j=0;j<5;j++)
            sum += a[i][j];
        printf("a[%d]sum: %d\n",i,sum);
    }
    for(j=0;j<5;j++){
        sum =0;
        for(i=0;i<3;i++)
            sum +=a[i][j];
        printf("a[][%d]sum: %d\n",j,sum);
    }
    return 0;
}
