#include <stdio.h>
 
int main() {
    char binary[32];
    int num, i;
 
    printf("10진수 정수를 입력하세요: ");
    scanf("%d", &num);
    
    for(i=0; i<32; i++) {
        binary[i] = num % 2;
        num /= 2;
    }
 
    for(i=31; i>=0; i--) {
        if((i+1) % 4 == 0)
            printf(" ");
        printf("%d", binary[i]);
    }
    printf("\n");
 
    return 0;
}
