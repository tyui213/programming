/*
파일명:asssignment01
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.09
버전:  v0.1
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_energy(void)
{
	double kg, ms;

	printf("질량(kg)?\n");
	scanf("%lf", &kg);

	printf("속력(m/s)?\n");
	scanf("%lf", &ms);

	printf("운동에너지 = %lf J", 1.0 / 2.0 * kg * (ms * ms));
}

int main()
{
	get_energy();
	return 0;
}