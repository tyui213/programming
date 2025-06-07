//assignment09 최정민 2025-03-31

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void HexToint(void)
{
	int num;

	printf("16진수 정수는?");
	scanf("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다", num, num);

}

int main(void)
{
	HexToint();
	return 0;
}