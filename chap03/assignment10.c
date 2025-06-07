/* 파일명: assignment10.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double usd, krw;

void URW() {
	printf("USD?\n", &usd);
	scanf("%lf", &usd);

	printf("원/달러 환율?\n", &krw);
	scanf("%lf", &krw);

	printf("USD %.2f = KRW %.2f", usd, usd * krw);
}
int main() {
	URW();
	return 0;
}