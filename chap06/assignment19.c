#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 그래프 함수 정의
void graph(int value, int scale) {
    int i;
    printf("%4d: ", value);    // 네 자리 정수 출력
    int stars = value / scale;
    for (i = 0; i < stars; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main() {
    int num1, num2, num3;
    srand((unsigned)time(NULL));

    // 0~9999 사이 임의의 값 3개 생성
    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    // 스케일 100으로 그래프 출력
    graph(num1, 100);
    graph(num2, 100);
    graph(num3, 100);

    return 0;
}