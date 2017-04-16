#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int count = 0;
 
void get_dice_face(int dice[]);
 
int main() {
    int dice[7] = {0};
    int i;
    char op;
    srand((unsigned)time(NULL));
 
    while(1) {
        get_dice_face(dice);
        if(count % 100 == 0) {
            for(i=1; i<7; i++) 
                printf("%3d ", i);
            printf("\n");
            for(i=1; i<7; i++)
                printf("%3d ", dice[i]);
            printf("\n");
 
            printf("계속하시겠습니까?(y-계속, n-종료) : ");
            fflush(stdin);
            scanf("%c", &op);
            printf("\n");
            if(op == 'n')
                return 0;
        }
    }
    return 0;
}
 
void get_dice_face(int dice[]) {
    dice[1 + rand()%6] += 1;
    count++;
}


