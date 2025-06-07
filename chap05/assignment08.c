#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    unsigned int a, b, r;
    char op;

    printf("비트 연산식? ");
    if (scanf("%i %c %i", &a, &op, &b) != 3) {
        return 1;  // 입력 형식 오류
    }

    switch (op) {
    case '&': r = a & b; break;
    case '|': r = a | b; break;
    case '^': r = a ^ b; break;
    default:
        printf("지원하지 않는 연산자입니다.\n");
        return 1;
    }

    // 16진수(대문자)로 출력, 접두어 없이
    printf("%X %c %X = %X\n", a, op, b, r);
    return 0;
}