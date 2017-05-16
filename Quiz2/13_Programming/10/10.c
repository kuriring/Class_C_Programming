#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 52
 
typedef struct {
    int value;
    char suit;
} Card;
 
void initial_card(Card cardData[], char shape[]);
void print_card(Card cardData[], int size);
void shuffle_card(Card cardData[], int size);
 
int main() {
    Card cardData[SIZE];
    char shape[] = {'c', 'd', 'h', 's'};
    srand((unsigned)time(NULL));
 
    initial_card(cardData, shape);
 
    printf("== 초기화 된 카드 == \n");
    print_card(cardData, SIZE);
    printf("\n");
 
    shuffle_card(cardData, SIZE);
 
    printf("== 셔플을 한 카드 == \n");
    print_card(cardData, SIZE);
    printf("\n");
    return 0;
}
 
void initial_card(Card cardData[], char shape[]) {
    int i, j, count;
 
    count = 0;
    for(i=0; i<4; i++) {
        for(j=0; j<13; j++) {
            cardData[count].value = j+1;
            cardData[count].suit = shape[i];
            count++;
        }
    }
}
void print_card(Card cardData[], int size) {
    int i;
    for(i=0; i<size; i++) {
            printf("%3d%c ", cardData[i].value, cardData[i].suit);
            if( (i+1) % 13 == 0)
                printf("\n");
    }
}
void shuffle_card(Card cardData[], int size) {
    Card temp;
    int i, j;
 
    for(i=0; i<52; i++) {
        j= rand() % 52;
        temp.value = cardData[i].value;
        cardData[i].value = cardData[j].value;
        cardData[j].value = temp.value;
    }
}
