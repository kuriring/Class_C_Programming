#include <stdio.h>
 
#define SET_BIT(n,pos) ( n |= (0x01 << pos) )
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )
 
int main() {
    int num;
 
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
 
    SET_BIT(num, 1);
    printf("%d \n", num);
 
    CLR_BIT(num, 0);
    printf("%d \n", num);
 
    GET_BIT(num, 1);
    printf("%d \n", num);
 
    return 0;
}
                
