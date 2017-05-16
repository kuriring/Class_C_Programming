#include<stdio.h>
typedef struct{
    double x;
    double y;
}Vector;
void vector_add(Vector v1,Vector v2);
int main(void){
    Vector v1,v2;
    printf("A Vector : ");
    scanf("%lf %lf",&v1.x,&v1.y);
    printf("B Vector : ");
    scanf("%lf %lf",&v2.x,&v2.y);
    vector_add(v1,v2);
    return 0;
}
void vector_add(Vector v1, Vector v2){
    printf("A+B Vector : (%.lf,%.lf)",(v1.x+v2.x),(v1.y+v2.y));
}
