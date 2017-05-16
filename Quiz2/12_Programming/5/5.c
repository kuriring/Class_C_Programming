#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void upper_lower(int c);
 
int main() {
    char str[20];
    int ctr = 0;
    
    while(1) {
        if(ctr == '.')
            break;
        printf("문자를 입력하시오: ");
 
        ctr = getchar();
        fflush(stdin);
        upper_lower(ctr);
    }
 
    return 0;
}
 
void upper_lower(int c) {
    int i;
    if(c >= 'a' && c <='z') {
        c -= 'a' - 'A';
        putchar(c);
    }
    else if(c >= 'A' && c <= 'Z') {
        c += 'a' - 'A';
        putchar(c);
    }
    printf("\n");
}
