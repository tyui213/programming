#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    unsigned int value;

    for (int i = 0; i < 32; i++) {
        value = 1u << i;
        // "%08X" 로 8자리 16진수(대문자), "%u" 로 부호 없는 10진수 출력
        printf("%2d번째 비트: %08X = %u\n", i, value, value);
    }

    return 0;
}