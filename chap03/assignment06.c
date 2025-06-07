/* 파일명: assignment06.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void assignment04()
{
	float m;

	printf("아파트의 면적(제곱미터)?\n", &m);

	scanf("%f", &m);

	printf("%.2f 제곱미터 = %.2f", m, 0.3025 * m);

}

int main() {
	assignment04();
	return 0;

}