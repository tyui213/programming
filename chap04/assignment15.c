/*
파일명:asssignment15
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.19
버전:  v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 각각의 값을 입력받는 함수
double get_input_기준율() {
    double 기준율;
    printf("원/달러 매매기준율? ");
    scanf("%lf", &기준율);
    return 기준율;
}

double get_input_우대율() {
    double 우대율;
    printf("환율우대율(0~100%%)? ");
    scanf("%lf", &우대율);
    return 우대율;
}

double get_input_달러() {
    double 달러;
    printf("구입할 달러(USD)? ");
    scanf("%lf", &달러);
    return 달러;
}

// 계산 함수
void calculate_exchange(double 기준율, double 우대율, double 달러금액) {
    double 수수료율 = 0.0175;
    double 적용환율 = 기준율 + (기준율 * 수수료율 * (1 - 우대율 / 100));
    double 총금액 = 적용환율 * 달러금액;

    printf("달러 살 때 환율은 %.6f입니다.\n", 적용환율);
    printf("USD %.2f를 살 때 ==> KRW %.2f입니다.\n", 달러금액, 총금액);
}

int main() {
    double 기준율 = get_input_기준율();
    double 우대율 = get_input_우대율();
    double 달러금액 = get_input_달러();

    calculate_exchange(기준율, 우대율, 달러금액);

    return 0;
}