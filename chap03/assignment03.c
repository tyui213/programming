/* 파일명: assignment03.c

 * 작성자: 최정민

 * 날짜: 2025.04.07.

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


double mass, height;

void get_mass(void) {
    printf("질량(kg)?\n");
    scanf("%lf", &mass);
}

void get_height(void) {
    printf("높이(m)?\n");
    scanf("%lf", &height);
}

void dpotential_energy(void) {
    double potential_energy = 9.8 * mass * height;
    printf("위치에너지: %f J\n", potential_energy);
}

int main() {
    get_mass();
    get_height();
    dpotential_energy();
    return 0;
}