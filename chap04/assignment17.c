/*
파일명:asssignment07
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.19
버전:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void printBitValue(int bit) {
    int value = 1 << bit;
    printf("%2d번 비트만 1인 값: %08X %d\n", bit, value, value);
}

int main() {
    printBitValue(7);
    printBitValue(15);
    printBitValue(23);
    printBitValue(31);
    return 0;
}