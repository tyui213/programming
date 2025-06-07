/* 파일명: assignment04.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void nm(void) {
	double n, m;

	printf("힘(n)?\n", &n);
	scanf("%lf", &n);

	printf("이동거리(m)?\n", &m);
	scanf("%lf", &m);

	printf("%.2f J ", n * m);
}

int main() {

	nm();
	return 0;
}