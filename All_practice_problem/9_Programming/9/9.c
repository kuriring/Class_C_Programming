#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT 10        
#define TIMES 3            

void insert_grade(int a[STUDENT][TIMES]);    
void search_max(int a[STUDENT][TIMES]);        
void search_min(int a[STUDENT][TIMES]);        
void print_grade(int a[STUDENT][TIMES]);    

int main() {
    int arr[STUDENT][TIMES] = {0};
    insert_grade(arr);    
    print_grade(arr);
    search_max(arr);
    search_min(arr);
    return 0;
}

void insert_grade(int a[STUDENT][TIMES]) {
    int stu, times;
    srand((unsigned)time(NULL));        
    
    for(stu=0; stu<STUDENT; stu++) {
        for(times=0; times<TIMES; times++)
            a[stu][times] = rand() % 101;    
    }
}
void search_max(int a[STUDENT][TIMES]) {
    int stu, times;
    int max;
 
    max = a[0][0];        
    for(times=0; times<TIMES; times++) {
        for(stu=0; stu<STUDENT; stu++) {
            if(max <= a[stu][times])        
                max = a[stu][times];
        }
        printf("시험 #%d 최대점수: %d \n", times+1, max);    
    }
    printf("\n");
}
void search_min(int a[STUDENT][TIMES]) {
    int stu, times;
    int min;
 
    min = a[0][0];        
    for(times=0; times<TIMES; times++) {
        for(stu=0; stu<STUDENT; stu++) {
            if(min >= a[stu][times])        
                min = a[stu][times];
        }
        printf("시험 #%d 최저점수: %d \n", times+1, min);
    }
    printf("\n");
}
void print_grade(int a[STUDENT][TIMES]) {
    int stu, times;
 
    printf(" 시험#1 시험#2 시험#3 \n");
    for(stu=0; stu<STUDENT; stu++) {        
        for(times=0; times<TIMES; times++)
            printf("%6d ", a[stu][times]);
        printf("\n");
    }
    printf("\n");
}
