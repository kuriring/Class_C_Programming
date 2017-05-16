#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define TRIANGLE 0
#define RECTANGLE 1
#define CIRCLE 2
 
typedef struct {
    int type;
    union {
        struct {double base, height;} tri;
        struct {double width, height;} rect;
        struct {double radius;} circ;
    } data;
} Shape;
 
int main() {
    Shape shapeData;
    char op;
 
    do {
        printf("도형의 종류를 선택하세요(0=삼각형, 1=사각형, 2=원) :  \n");
        scanf("%d", &shapeData.type);
 
        switch(shapeData.type) {
        case TRIANGLE :
            printf("삼각형의 밑변 : ");    scanf("%lf", &shapeData.data.tri.base);
            printf("삼각형의 높이 : ");    scanf("%lf", &shapeData.data.tri.height);
            break;
        case RECTANGLE :
            printf("사각형의 가로 : ");    scanf("%lf", &shapeData.data.rect.width);
            printf("사각형의 세로 : ");    scanf("%lf", &shapeData.data.rect.height);
            break;
        case CIRCLE :
            printf("원의 반지름 : ");    scanf("%lf", &shapeData.data.circ.radius);
            break;
        default :
            printf("잘못 입력하였습니다. \n");
            break;
        }
 
        printf("계속 하시겠습니까?(y/n) : ");
        fflush(stdin);
        scanf("%c", &op);
    } while(op != 'n');
 
    return 0;
}
