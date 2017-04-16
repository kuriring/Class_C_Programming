#include <stdio.h>
 
int get_tri_number(int n);
 
int main() {
    int n;
 
    printf("몇번째 삼각수를 계산할까요?: ");
    scanf("%d", &n);
 
    printf("%d \n", get_tri_number(n));
 
    return 0;
}
 
int get_tri_number(int n) {
    if(n == 1)    return 1;
    else        return (n + get_tri_number(n-1));
}


