//assignment07 최정민 2025-03-31

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char coffee;
    int size;

    printf("커피 사이즈(S,T,G)와 주문 수량? ");
    scanf(" %c %d", &coffee, &size);
    printf("%c 사이즈 %d잔을 주문합니다", coffee, size);

}