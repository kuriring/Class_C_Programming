#include<stdio.h>

//2πR : 360˚ = l : θ
# define pie 3.141592
int main(void){
    //2πR = C
    float l=900,o=7.2,result,C;
    result = 360/o;
    C = l*result;
    printf("지구의 반지름 = %f",C/pie/2);
    return 0;
}
