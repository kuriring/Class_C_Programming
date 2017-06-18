#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT 4
#define SUBJECT 4
 
void get_grade(int arr[][SUBJECT], int stu, int sub);
void print_arr(int arr[][SUBJECT], int stu, int sub);
double get_average(int arr[], int size);
 
int main() {
    int arr[STUDENT][SUBJECT];
    int i, size;
    srand((unsigned)time(NULL));
 
    get_grade(arr, STUDENT, SUBJECT);
    printf("=> 과목별 성적 <= \n");
    printf("== 수학   국어   영어  한국사 == \n");
    print_arr(arr, STUDENT, SUBJECT);
 
    size = sizeof(arr[i]) / sizeof(arr[i][0]);
    for(i=0; i<STUDENT; i++)
        printf(" 학생%d의 평균 : %.2f \n", i+1, get_average(arr[i], size));
    
    return 0;
}
 
void get_grade(int arr[][SUBJECT], int stu, int sub) {
    int i, j;
    for(i=0; i<stu; i++) {
        for(j=0; j<sub; j++)
            arr[i][j] = 1 + rand() % 100;
    }
}
void print_arr(int arr[][SUBJECT], int stu, int sub) {
    int i, j;
    for(i=0; i<stu; i++) {
        for(j=0; j<sub; j++)
            printf(" %5d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
double get_average(int arr[], int size) {
    int i;
    double sum = 0;
    for(i=0; i<size; i++)
        sum += arr[i];
    return ( sum / size );
}
                                        
