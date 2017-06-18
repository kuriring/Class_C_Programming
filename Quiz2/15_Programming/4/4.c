#include <stdio.h>
 
#define PI 3.1415
#define VOLUME(r,h) ( PI*r*r*h )
 
int main() {
    int radius, height;
 
    printf("반지름과 높이를 입력하시오: ");
    scanf("%d %d", &radius, &height);
 
    printf("원기둥의 부피는 %f입니다. \n", VOLUME(radius, height));
 
    return 0;
}
