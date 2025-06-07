/*
파일명:asssignment16
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.19
버전:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 각각의 색상 값을 입력받는 함수 선언
double get_red(void);
double get_green(void);
double get_blue(void);

// RGB를 계산하고 출력하는 함수
void count(double r, double g, double b);

int main() {
    // 각각의 값을 받아서 변수에 저장
    double red = get_red();
    double green = get_green();
    double blue = get_blue();

    // 계산 함수 호출
    count(red, green, blue);

    return 0;
}

double get_red(void) {
    double r;
    printf("red? ");
    scanf("%lf", &r);
    return r;
}

double get_green(void) {
    double g;
    printf("green? ");
    scanf("%lf", &g);
    return g;
}

double get_blue(void) {
    double b;
    printf("blue? ");
    scanf("%lf", &b);
    return b;
}

void count(double r, double g, double b) {
    // 정수형으로 변환 + 오버플로우 방지
    unsigned int red = (unsigned int)r & 0xFF;
    unsigned int green = (unsigned int)g & 0xFF;
    unsigned int blue = (unsigned int)b & 0xFF;

    // RGB 트루컬러 계산
    unsigned int rgb = (blue << 16) | (green << 8) | red;

    // 결과 출력
    printf("RGB 트루컬러값: %06X\n", rgb);
}