#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 메뉴 번호를 선택하는 함수
int choose_menu() {
    int menu;
    while (1) {
        printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
        scanf("%d", &menu);
        if (menu >= 0 && menu <= 3) return menu;
        printf("잘못된 번호입니다. 다시 입력하세요.\n");
    }
}

// choose_menu만 호출하는 메인
int main() {
    int sel = choose_menu();
    printf("%d번 메뉴를 선택하셨습니다.\n", sel);
    return 0;
}