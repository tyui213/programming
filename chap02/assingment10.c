//assignment10 최정민 2025-03-31

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void coverted_num(void) {
	int num;
	printf("8진수 입력하려면 012, 16진수로 입력하면 0x12처럼 입력하세요.\n");
	printf("정수?");

	scanf("%i", &num);

	printf("8진수: 0%o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: %#x\n", num);
}

int main(void)
{
	coverted_num();
	return 0;

}