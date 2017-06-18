#include <stdio.h>
 
#define SET_BIT(n,pos) ( n |= (0x01 << pos) )
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )
 
void display(int num);
 
int main() {
    int num;
 
    printf("정수값을 입력하시오: ");
    scanf("%d", &num);
    display(num);
    return 0;
}
 
void display(int num) {
    int i;
    i = sizeof(int) * 8;
    for( ; i>0; i--) {
        if(i % 4 == 0 && i != 32)
            printf(" ");
        printf("%d", GET_BIT(num, i));
    }
    printf("\n");
}
