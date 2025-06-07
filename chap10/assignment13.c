#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 점 정보를 저장하는 구조체 정의
typedef struct {
    int x;
    int y;
} POINT;

// 직사각형 정보를 저장하는 구조체 정의 (두 점으로 구성)
typedef struct {
    POINT left_bottom;  // 좌하단점
    POINT right_top;    // 우상단점
} RECT;

// 직사각형 정보를 출력하는 함수
void print_rect(RECT r) {
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y, r.right_top.x, r.right_top.y);
}

int input_output(void) {
    RECT rect;

    // 좌하단점 입력
    printf("직사각형의 좌하단점(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // 우상단점 입력
    printf("직사각형의 우상단점(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // 직사각형 정보 출력
    print_rect(rect);

}
int main(void) {
    input_output();
    return 0;
}
