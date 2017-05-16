#include<stdio.h>

typedef struct{
    int x,y;
}Point;
int equal(Point *p1, Point *p2);
int quadrant(Point *p1);
int main(void){
    Point p1,p2;
    int result;
    printf("Point 1 input: ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("Point 2 input: ");
    scanf("%d %d",&p2.x,&p2.y);
    result = equal(&p1,&p2);
    if(result==1)
        printf("Right\n");
    else if(result ==0)
        printf("wrong\n");
    quardrant(&p1);
    quardrant(&p2);
    return 0;
}
int equal(Point *p1, Point *p2){
    if(p1->x == p2->x && p1->y==p2->y)
        return 1;
    else
        return 0;
}
int quardrant(Point *p1){
    if(p1->x>0 && p1->y>0)
        printf("1사분면\n");
    if(p1->x<0 && p1->y>0)
        printf("2사분면\n");
    if(p1->x<0 && p1->y<0)
        printf("3사분면\n");
    if(p1->x>0 && p1->y<0)
        printf("4사분면\n");
}
