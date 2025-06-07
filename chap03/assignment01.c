/* 파일명: assignment01.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void asd(void)
{

	int s;

	printf("한 변의 길이?\n", &s);
	scanf("%d", &s);

	printf("정사각형의 넓이: %d\n", s * s);
	printf("정사각형의 둘레: %d\n", 4 * s);

}

int main() {
	asd();
	return 0;

}