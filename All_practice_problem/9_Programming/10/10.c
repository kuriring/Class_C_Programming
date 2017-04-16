#include <stdio.h>
#include <stdlib.h>        
#include <time.h>        
 
#define SIZE 3    
 
void insert_num(double* a);    
void vector_add(double* a, double* b, double* c);    
void print_vector_sum(double* a);    
void vector_dot_prod(double* a, double* b);    
 
int main() {
    double x[SIZE];    
    double y[SIZE];
    double z[SIZE];
 
    insert_num(x);
    insert_num(y);
 
    vector_add(x, y, z);    
 
    print_vector_sum(z);    
    vector_dot_prod(x, y);    
 
    return 0;
}
 
void insert_num(double* a) {
    int i;
    static int first=0;        
    srand((unsigned)time(NULL));
 
    if(first == 0) {
        for(i=0; i<SIZE; i++)
            a[i] = rand() % 10 +1;    
        first = 1;
        return;
    }
    for(i=0; i<SIZE; i++)
        a[i] = rand() % 10 +1;
}
void vector_add(double* a, double* b, double* c) {
    int i;
 
    for(i=0; i<SIZE; i++)        
        c[i] = (a[i] + b[i]);    
}
void print_vector_sum(double* a) { 
    int i;
    double sum = 0;
 
    for(i=0; i<SIZE; i++)
        sum += a[i];        
    printf("X + Y = %.2f \n", sum);
}
void vector_dot_prod(double* a, double* b) {
    int i;
    double mul = 1;
 
    for(i=0; i<SIZE; i++)
        mul *= (a[i] * b[i]);    
    printf("X·Y = %.2f \n", mul);
}
