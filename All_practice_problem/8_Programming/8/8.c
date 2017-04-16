#include <stdio.h>
 
void show_digit(int n);
void show_reverse(int n);
 
int main() {
    int n;
 
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
 
    show_digit(n);
    printf("\n");
    return 0;
}
 
void show_digit(int n) {
    if(n == 0) return;
 
    show_digit(n/10);
    printf("%d ", n % 10);
}
