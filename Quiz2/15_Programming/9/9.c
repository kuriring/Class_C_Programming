#include <stdio.h>
 
#define SET_BIT(n,pos) ( n |= (0x01 << pos) )
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )
 
void display(int num);
 
int main() {
    char arr[100];
    int i;
 
    printf("문자열을 입력하시오: ");
    gets(arr);
 
    printf("결과 문자열 : ");
    for(i=0; arr[i] != NULL; i++)
        printf("%c", arr[i] ^ 0x20);
    printf("\n");
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
    printf("\n,");
}

