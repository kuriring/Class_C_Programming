#include<stdio.h>

int main(void){
	int ch,i;
	FILE * fp=fopen("good.txt","rt");
	if(fp==NULL){
		printf("nonononoonono");
		return -1;
	}
	for(i=0;i<2;i++){
		ch=fgetc(fp);
		printf("%c\n",ch);
	}
	fclose(fp);
	return 0;
}
