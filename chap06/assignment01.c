#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 가로와 세로의 길이를 매개변수로 받아 직사각형의 둘레를 반환하는 함수
int get_perimeter(int width, int height) {
    return 2 * (width + height);
}

int 모든식()
{
    int width, height, perimeter;

    // 가로 입력
    printf("가로? ");
    scanf("%d", &width);

    // 세로 입력
    printf("세로? ");
    scanf("%d", &height);

    // 함수 호출로 둘레 계산
    perimeter = get_perimeter(width, height);

    // 결과 출력
    printf("직사각형의 둘레: %d\n", perimeter);
}

int main(void) {

    모든식();
    return 0;
}