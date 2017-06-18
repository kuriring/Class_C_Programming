#include<stdio.h>
#include<string.h>
int main(void){
	char test1[100],test2[100],ch,ch1;
	int i;
	FILE * fp1 = fopen("test1.txt","rt");
	FILE * fp2 = fopen("test2.txt","rt");

	if(fp1==NULL || fp2==NULL){
		printf("nonononno");
	}
	for(i=0;ch != EOF;i++){
		ch=fgetc(fp1);
		test1[i] = ch;
	}
	for(i=0;ch1 !=EOF; i++){
		ch1=fgetc(fp2);
		test2[i] = ch1;
	}
	//printf("첫번째 파일 내용: %s\n",test1);
	//printf("두번째 파일 내용: %s\n",test2);
	if(!strcmp(test1,test2))
		printf("Right");
	else
		printf("Fail");
	return 0;
}
