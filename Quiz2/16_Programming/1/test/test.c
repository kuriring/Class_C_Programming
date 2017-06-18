#include<stdio.h>

int main(void){
	FILE * fp = fopen("good.txt","wt");
	if(fp==NULL){
		puts("파일오픈실패 n.n");
		return -1;
		}
	fputs("A",fp);
	fputs("N",fp);
	fclose(fp);
	return 0;
}
