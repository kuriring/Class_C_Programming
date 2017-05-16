#include<stdio.h>
typedef struct{
    int x,y;
}Point;
typedef struct{
    Point a,b;
}Rectangle;
int area(Rectangle r);
int perimeter(Rectangle r);
int is_square(Rectangle r);

int main(void){
    Rectangle r;
    printf("Right up input: ");
    scanf("%d %d",&r.a.x,&r.a.y);
    printf("left down input: ");
    scanf("%d %d",&r.b.x,&r.b.y);
    printf("사각형의 넓이는%d\n",area(r));
    printf("사각형의 둘레는%d\n",perimeter(r));
    if(is_square==1)
        printf("정사각형입니다");
    else
        printf("정사각형이 아닙니다");
    return 0;
}
int area(Rectangle r){
    int result;
    result = (r.a.x-r.b.x)*(r.a.y-r.b.y);
    return result;
}
int perimeter(Rectangle r){
    int result;
    result = ((r.a.x-r.b.x)+(r.a.y-r.b.y))*2;
    return result;
}
int is_square(Rectangle r){
    int result;
    result = (r.a.x-r.b.x)==(r.a.y-r.b.y)?1:2;
    return result;
}
