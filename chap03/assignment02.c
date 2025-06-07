/* 파일명: assignment02.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void asignment02(void)
{
	int w, l;

	printf("가로의 길이?\n");
	scanf("%d", &w);

	printf("세로의 길이?\n");
	scanf("%d", &l);

	printf("직사각형의 넓이:%d\n", w * l);
	printf("직사각형의 둘레:%d\n", (w + l) * 2);

}

int main() {

	asignment02();

	return 0;
}