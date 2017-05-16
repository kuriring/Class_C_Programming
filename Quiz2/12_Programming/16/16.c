#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
 
#define SIZE 100
 
int main() {
    int i, j, k;
    char text[SIZE];
    
    printf("광고하고 싶은 텍스트를 입력하시오: ");
    gets(text);
 
    for(i=0; text[i] != NULL; i++);
    j = i;
    k = 0;
    while(1) {
        system("cls");
        for(i=0; i<j; i++)
            printf("%c", text[(i+k) % j]);
        k++;
        Sleep(500);
    }
    return 0;
}
