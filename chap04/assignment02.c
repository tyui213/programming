/*
파일명:asssignment02
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.19
버전:  v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double t();
void c(double a);

int main()
{
    double a = t();
    c(a);
    return 0;
}

double t()
{
    double a;
    printf("화씨온도? ");
    scanf("%lf", &a);
    return a;
}

void c(double a)
{
    printf("%.2lf F = %.2lf C\n", a, (a - 32) * (5.0 / 9.0));
}