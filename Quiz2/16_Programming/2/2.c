#include<stdio.h>
#include<ctype.h>
int main(void){
	char ch,result[100];
	int i,j;
	FILE * fp = fopen("test.txt","rt");
	FILE * rs = fopen("result.txt","wt");

	for(i=0;ch!=EOF;i++){
		ch=fgetc(fp);
		result[i] = toupper(ch);
	}
	for(j=0; j<i;j++)
		fputc(result[j],rs);
	return 0;
}
