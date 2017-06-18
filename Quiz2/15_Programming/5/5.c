#include <stdio.h>
 
#define IS_SPACE(c) ( c == '\t' || c == ' ' || c == '\n' )
 
int main() {
    char arr[100];
    int i, count = 0;
 
    printf("문자열을 입력하시오: ");
    gets(arr);
 
    for(i=0; arr[i] != NULL; i++)
        if(IS_SPACE(arr[i]))
            count++;
    printf("공백 문자의 개수는 %d개입니다. \n", count);
 
    return 0;
}
