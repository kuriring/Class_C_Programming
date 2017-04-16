#include<stdio.h>
 
void scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);
void print_arr(int a[][3]);
 
int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    int b[3][3] = {0};
    int scalar;
 
    printf("scalar 값을 입력하시오: ");
    scanf("%d", &scalar);
 
    print_arr(a);
    scalar_mult(a, scalar);
    print_arr(a);
 
    print_arr(b);
    transpose(a, b);
    print_arr(b);
 
    return 0;
}
 
void scalar_mult(int a[][3], int scalar) {
    int i, j;
 
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            a[i][j] = a[i][j] * scalar;
    }
}
void transpose(int a[][3], int b[][3]) {
    int i, j;
 
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            b[i][j] = a[j][i];
    }
}
void print_arr(int a[][3]) {
    int i, j;
 
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}
