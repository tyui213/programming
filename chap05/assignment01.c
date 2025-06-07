#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_point_in_rectangle(void) {
    int left, top, right, bottom;
    int x, y;

    printf("선택 영역의 좌상단점 (left, top)? ");
    scanf("%d %d", &left, &top);

    printf("선택 영역의 우하단점 (right, bottom)? ");
    scanf("%d %d", &right, &bottom);

    printf("점의 좌표 (x, y)? ");
    scanf("%d %d", &x, &y);

    if (x >= left && x <= right && y >= top && y <= bottom) {
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    }
    else {
        printf("직사각형 모양의 선택 영역 밖의 점입니다.\n");
    }
}

int main() {
    check_point_in_rectangle();
    return 0;
}