#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 짝수인지 판별하는 함수
int is_even(int n) {
    return n % 2 == 0;
}

// 홀수인지 판별하는 함수
int is_odd(int n) {
    return n % 2 != 0;
}

// 짝수/홀수 개수 세는 함수
void count_even_odd() {
    int n;
    int even_cnt = 0, odd_cnt = 0;

    printf("정수 입력 (마지막에 0 입력):\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (is_even(n))
            even_cnt++;
        else
            odd_cnt++;
    }
    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even_cnt, odd_cnt);
}

int main() {
    count_even_odd();
    return 0;
}