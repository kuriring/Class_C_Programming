#include<stdio.h>
#include<string.h>
int main(void){
    char s[1024],*ptr;
    int count;
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    ptr = strtok(s," ");
    count++;
    while(ptr != NULL){
        count ++;
        ptr=strtok(NULL," ");
    }
    printf("단어의 수는 %d입니다.",count-1);
    return 0;
}
