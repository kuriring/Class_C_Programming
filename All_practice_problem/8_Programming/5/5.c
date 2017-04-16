#include <stdio.h>
 
int account = 0;
 
void save(int);
void draw(int);
int get_amount();
 
int main() {
    int amount = 0;
    int ch, sum;
 
    while(1) {
        printf("메뉴를 선택하세요: 저축(1), 인출(2), 종료(0):  ");
        scanf("%d", &ch);
 
        if(ch == 1) {
            amount = get_amount();
            save(amount);
            printf("현재 잔액은 %d입니다. \n", account);
        }
        else if(ch == 2) {
            amount = get_amount();
            draw(amount);
            printf("현재 잔액은 %d입니다. \n", account);
        }
        else if(ch == 0)
            break;
        else
            printf("잘못 입력하였습니다. \n");
    }
    return 0;
}
 
void save(int amount) {
    account += amount;
}
void draw(int amount) {
    account -= amount;
}
int get_amount() {
    int amount;
    printf("저축할 금액: ");
    scanf("%d", &amount);
    return amount;
}


