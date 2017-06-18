#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 5
#define COLS 5
void get_arr(char arr[][COLS], int size);
void print_arr(char arr[][COLS], int size);
void array_copy(char arr1[][COLS], char arr2[][COLS], int size);
 
int main() {
    char arr1[ROWS][COLS];
    char arr2[ROWS][COLS];
    srand((unsigned)time(NULL));
 
    get_arr(arr1, COLS);
    print_arr(arr1, COLS);
 
    array_copy(arr1, arr2, COLS);
    print_arr(arr2, COLS);    
 
    return 0;
}
 
void get_arr(char arr[][COLS], int size) {
    int i, j;
    for(i=0; i<sizeof(arr)/sizeof(COLS)*COLS; i++) {
        for(j=0; j<COLS; j++)
            *(*(arr+i)+j) = rand() % 10;
    }
}
void print_arr(char arr[][COLS], int size) {
    int i, j;
    for(i=0; i<sizeof(arr)/sizeof(COLS)*COLS; i++) {
        for(j=0; j<COLS; j++)
            printf("%3d ", *(*(arr+i)+j));
        printf("\n");
    }
    printf("\n");
}
void array_copy(char arr1[][COLS], char arr2[][COLS], int size) {
    int i, j;
    for(i=0; i<sizeof(arr1)/sizeof(COLS)*COLS; i++) {
        for(j=0; j<COLS; j++)
            *(*(arr2+i)+j) = *(*(arr1+i)+j);
    }
}
