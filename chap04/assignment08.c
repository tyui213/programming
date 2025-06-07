
/*
파일명:asssignment08
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.09
버전:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

double radius();
double calculate(double r);
void volume(double voulume);

int main()
{
    double length = radius();
    double voulume = calculate(length);
    volume(voulume);
    return 0;
}

// 반지름의 길이를 입력받음
double radius()
{
    double r;
    printf("반지름의 길이?\n");
    scanf("%lf", &r);
    return r;
}

// 반지름을 이용해 구의 부피를 계산
double calculate(double r)
{
    double voulume = (4.0 / 3.0) * PI * (r * r * r);
    return voulume;
}

// 구의 부피를 출력
void volume(double voulume)
{
    printf("구의 부피: %lf\n", voulume);
}