#include <stdio.h>
#include <stdlib.h>
 
char* get_word();
 
int main(void)
{
    char *p;
    p=get_word();
    printf("동적 메모리에 저장된 단어는 %s입니다.\n",p);
    free(p); //어차피 p와 get_word 의 s의 주소가 같아서 p를 free해줘도 된다.
    return 0;
}
char* get_word()
{
    char *s;
    s=(char*)malloc(sizeof(char)*50);
    if(s==NULL)
    {
        printf("메모리할당오류\n");
        exit(1);
    }
    printf("단어를 입력하세요: ");
    gets(s);
    return s;
}
