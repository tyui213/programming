/* 파일명: assignment06.c

 * 내용: 크기가 10인 실수형 배열에 대해서 원들을 역순으로 만드는 프로그램을 작성하시오.

 * 작성자: 최정민

 * 날짜: 2025.05.31.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 원래 배열과 역순 배열 출력 함수
void print_array_reverse(double arr[], int size) {
    int i;

    printf("배열: ");
    for (i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    printf("역순: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    print_array_reverse(arr, 10); // 메인에는 함수 호출만!
    return 0;
}
