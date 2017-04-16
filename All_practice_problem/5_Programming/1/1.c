#include<stdio.h>

int main(void){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'a':
            printf("모음입니다");
            break;
        case 'e':
            printf("모음입니다");
            break;
        case 'i':
            printf("모음입니다");
            break;
        case 'o':
            printf("모음입니다");
            break;
        case 'u':
            printf("모음입니다");
            break;
        default:
            printf("자음입니다");
            break;
    }
    return 0;
}
