#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#define ROW 20
#define COL 20
int main(void)
{
    FILE *fpr=NULL;
    FILE *fpw=NULL;
    char tok[ROW][COL];
    char rpl[SIZE];
    char sub[SIZE];
    char line[SIZE];
    char *token;
    int count; int i;
    if((fpr=fopen("origin.txt","r"))==NULL)
    {
        printf("파일오픈실패1\n");
        exit(1);
    }
    if((fpw=fopen("change.txt","a"))==NULL)
    {
        printf("파일오픈실패2\n");
        exit(1);
    }
    printf("바뀔 단어를 입력하세요: ");
    gets(rpl);
    printf("대신 넣을 단어를 입력하세요: ");
    gets(sub);
    while(!feof(fpr))
    {
        fgets(line,SIZE,fpr);
            count=0;
            token=strtok(line," "); //토큰 분리
            while(token!=NULL)
            {
                strcpy(tok[count],token); //토큰을 이차원배열로 삽입
                if(strcmp(tok[count],rpl)==0) //이차원배열과 rpl 비교
                {strcpy(tok[count],sub);} //같을시 이차원배열에 sub 삽입
                count++; //카운트는 이차원배열 개수 세는데 사용
                token=strtok(NULL," \n"); //연속적 토큰 분리
            }
        for(i=0;i<count;i++)
        {
            strcat(tok[i]," "); //자르는 것으로 공백문자사용 했기에 다시 붙여줘야함
            fputs(tok[i],fpw);
        }
        fputs("\n",fpw); //자르는 것으로 개행문자 사용했으므로 다시 붙여줌
    } //이프로그램은 불완전한데 쉼표나 마침표가 붙어있으면 검색을 하지 못한다.
    fclose(fpr); //그렇다고 자르는 것으로 쉼표를 추가한다고 해도 그 쉼표를
    fclose(fpw); // 제자리에 다시 박아놓는 방법을 찾지 못하였다.(어떤 걸로 잘랐는지 어떻게 구분할까?)
    return 0;
    }
