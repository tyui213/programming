/* 파일명: assignment05.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double inch;

	printf("길이(inch)?\n", &inch);
	scanf("%lf", &inch);

	printf("%lf inch = %lf cm", inch, 2.54 * inch);

	return 0;
}