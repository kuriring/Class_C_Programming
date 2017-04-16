#include<stdio.h>

int main(void){
    int a[3][5]={{12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21}};
    int col_sum[3]={0,0,0},row_sum[5]={0,0,0},i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            col_sum[i] += a[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<3;j++)
            row_sum[i] +=a[j][i];
    }
    for(i=0;i<3;i++)
        printf("[col[%d]]=%d\n",i,col_sum[i]);
    for(i=0;i<5;i++)
        printf("[row[%d]]=%d\n",i,row_sum[i]);
    return 0;
}
