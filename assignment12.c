/* 파일명: assignment12.c

 * 내용: 기차표 예매 프로그램을 작성

 * 작성자: 홍길동

 * 날짜: 2025.05.31.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 좌석 상태 출력 함수
void print_seats(int seats[], int size) {
    printf("현재 좌석: [ ");
    for (int i = 0; i < size; i++) {
        if (seats[i] == 0)
            printf("0");
        else
            printf("X");
    }
    printf(" ]\n");
}

// 좌석 예매 함수 (연속된 자리 예매, 성공 시 1, 실패 시 0 반환)
int reserve_seats(int seats[], int size, int cnt) {
    int i, j, found;
    for (i = 0; i <= size - cnt; i++) {
        found = 1;
        for (j = 0; j < cnt; j++) {
            if (seats[i + j] == 1) {
                found = 0;
                break;
            }
        }
        if (found) {
            for (j = 0; j < cnt; j++) {
                seats[i + j] = 1;
                printf("%d ", i + j + 1); // 좌석 번호 1번부터 출력
            }
            printf("번 좌석을 예매했습니다.\n");
            return 1;
        }
    }
    printf("더 이상 예매 불가합니다.\n");
    return 0;
}

int main(void) 
{
    int seats[10] = { 0 };
    int num;
    while (1) {
        print_seats(seats, 10);
        printf("예매할 좌석수? ");
        scanf("%d", &num);
        if (num < 1 || num > 10) break;
        if (!reserve_seats(seats, 10, num))
            break;
    }
    return 0;
}
