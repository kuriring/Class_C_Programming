#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void tolower(char* str);
 
int main() {
    char str[100];
    char word[] = " ";
    char *token;
    char first_name[10];
    char *second_name[10];
    int i, count = 0;
 
    printf("영어 이름을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = NULL;
 
    tolower(str);
    token = strtok(str, word);
 
    for(i=0; token != NULL; i++) {
        if(count == 0) {
            strcpy(first_name, token);
            token = strtok(NULL, word);
        }
        second_name[i] = token;
        token = strtok(NULL, word);
        count++;
    }
 
    printf("변환된 이름: ");
    for(i=0; i<count; i++) {
        printf("%s", second_name[i]);
        if(i+1 != count)
            printf(" ");
    }
    printf(", ");
    printf("%s \n", first_name);
 
    return 0;
}
 
void tolower(char* str) {
    int i;
 
    for(i=0; str[i] != NULL; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
    }
}
