#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 함수 선언
double distance(int x1, int y1, int x2, int y2);
void asd();

int main()
{
    asd();
    return 0;
}

// 함수 정의
double distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void asd()
{
    int x_start, y_start, x_end, y_end;

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &x_start, &y_start);

    printf("직선의 끝점 좌표? ");
    scanf("%d %d", &x_end, &y_end);

    double dist = distance(x_start, y_start, x_end, y_end);
    printf("(%d, %d)~(%d, %d) 직선의 길이: %lf\n", x_start, y_start, x_end, y_end, dist);

}