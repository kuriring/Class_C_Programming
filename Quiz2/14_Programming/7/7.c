#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<Windows.h>
 
#define ROWS 10
#define COLS 10
 
void insert(unsigned char image[][COLS]);
void print_image(unsigned char image[][COLS]);
void print_menu();
void binarize(unsigned char image[][COLS], int critical_value);
void invert(unsigned char image[][COLS]);
void draw_image(unsigned char image[][COLS]);
 
int main() {
    unsigned char image[ROWS][COLS];    
    int menu, critical_value;            
 
    insert(image);                        
 
    while(1) {                            
        print_image(image);                
        print_menu();                    
        draw_image(image);                
 
        printf("메뉴를 선택하세요: ");    
        scanf("%d", &menu);                
                
        switch(menu) {                
        case 1:            
            printf("임계값을 입력하세요: ");        
            scanf("%d", &critical_value);        
            binarize(image, critical_value);
            break;
        case 2:            
            invert(image);        
            break;
        case 3:            
            return 0;    
        }
        system("cls");        
    }
    return 0;
}
 
void insert(unsigned char image[][COLS]) {    
    int i, j;
    srand((unsigned)time(NULL));            
    for(i=0; i<ROWS; i++)
        for(j=0; j<COLS; j++)
            image[i][j] = rand() % 256;        
}
void print_image(unsigned char image[][COLS]) {    
    int i, j;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++)
            printf("%7d", image[i][j]);
        puts("");
    }
}
void print_menu() {    // 사용자가 선택할 수 있는 기능을 보여주는 함수
    printf("==============================================================================\n");
    printf(" 1.이진화 : 각 픽셀의 값이 임계값보다 낮으면 0으로 만들고 높으면 255로 만든다.\n");
    printf(" 2.반  전 : 영상의 흑백을 반전시킨다.(0을 255로, 255를 0으로 전환)\n");
    printf(" 3.종  료 : \n");
    printf("==============================================================================\n");
}
void binarize(unsigned char image[][COLS], int critical_value) {    
    int i, j;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++) {
            if(image[i][j] >= critical_value)    
                image[i][j] = 255;
            else                                
                image[i][j] = 0;
        }
    }
}
void invert(unsigned char image[][COLS]) {        
    int i, j;
    for(i=0; i<ROWS; i++)
        for(j=0; j<COLS; j++)
            image[i][j] = 255 - image[i][j];        
}
void draw_image(unsigned char image[][COLS]) {    
    int i, j;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++) {
            if(image[i][j] == 255)        
                printf("□     ");
            else if(image[i][j] == 0)
                printf("■     ");        
        }
        printf("\n");
    }
}

