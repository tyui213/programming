/* 파일명: assignment07.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double a;

void assgnment07(void) {
	printf("실수?\n", &a);
	scanf("%lf", &a);

	printf("제곱: %e", a * a);
	printf("세제곱: %e", a * a * a);

}
int main() {
	assgnment07();
	return 0;
}