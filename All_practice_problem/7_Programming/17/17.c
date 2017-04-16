#include<stdio.h>

int print_menu();
int check_menu_number(int x);
int select_menu(int x);
int main(void){
    int x;
    print_menu();
    return 0;
}
int print_menu(){
    int x;
    printf("1.햄버거\n2.치즈버거\n3.샌드위치\n4.종료\n원하는 메뉴를 선택하시오: ");
    scanf("%d",&x);
    check_menu_number(x);
}
int check_menu_number(int x){
    if(x<0 || x>4)
        print_menu();
    else
        select_menu(x);
}
int select_menu(int x){
    printf("%d번 메뉴가 선택되었습니다.",x);
}
