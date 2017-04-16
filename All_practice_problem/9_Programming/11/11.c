#include <stdio.h>
 
#define SIZE 32
 
void change(int* binary, int n);
void print_binary(int* binary);
 
int main() {
    int n;
    int binary[SIZE];
 
    printf("10진수 정수를 입력하세요: ");
    scanf("%d", &n);
 
    change(binary, n);
    print_binary(binary);
 
    return 0;
}
 
void change(int* binary, int n) {
    int i;
 
    for(i=0; i<32; i++) {
        binary[i] = n % 2;
        n = n / 2;
    }
}
void print_binary(int* binary) {
    int i;
 
    for(i=32-1; i>=0; i--) {
        printf("%d", binary[i]);
        if(i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}


