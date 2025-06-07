/* 파일명: assignment01.c

 * 내용: 첫 번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성

 * 작성자: 최정민

 * 날짜: 2025.05.31.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_arithmetic_sequence(int first, int diff) {
    int arr[10];
    arr[0] = first;
    printf("등차수열: %d ", arr[0]);
    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] + diff;
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void print()
{
    int first, diff;
    printf("첫 번째 항? ");
    scanf("%d", &first);
    printf("공차? ");
    scanf("%d", &diff);
    print_arithmetic_sequence(first, diff);
}

int main(void) 
{
    print();
    return 0;
}
