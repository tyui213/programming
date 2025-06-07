/* 파일명: assignment10.c

 * 내용: 행렬의 합을 구하는 프로그램을 작성하시오.

 * 작성자: 최정민

 * 날짜: 2025.05.31.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 행렬 출력 함수
void print_matrix(const char* name, int arr[3][3]) {
    printf("%s 행렬:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}

// 행렬 합 구하는 함수
void add_matrix(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void xyxy()
{
    int x[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
    };
    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int z[3][3];

    print_matrix("x", x);
    print_matrix("y", y);
    add_matrix(x, y, z);
    print_matrix("x + y", z);

}
int main(void) {
    xyxy();
    return 0;
}
