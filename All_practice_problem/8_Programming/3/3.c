#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int get_random();
 
int main() {
    printf("1번째 호출 = %d \n",get_random());
    printf("2번째 호출 = %d \n",get_random());
    printf("3번째 호출 = %d \n",get_random());
    printf("4번째 호출 = %d \n",get_random());
    printf("5번째 호출 = %d \n",get_random());
    return 0;
}
int get_random() {
    static int inited = 0;
    if(inited == 0) {
        srand(time(NULL));
        inited = 1;
    }
    return rand()%100+1;
}


