#include<stdio.h>

int main(void){
    char s;
    while(1){
        s =getchar();
        fflush(stdin);
        if(s =='.')
            break;
        if(s>='A'&&s<='Z'){
            putchar(s+32);
            fflush(stdin);
        }
        else if(s>='a'&&s<='z'){
            putchar(s-32);
            fflush(stdin);
        }
        else
            printf("경고경고경고경고");
    }
    return 0;
}
