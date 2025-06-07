#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print_divisors(int num) {
    int count = 0;

    printf("%dÀÇ ¾à¼ö: ", num);


    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("=> ÃÑ %d°³\n", count);
}

int main(void) {
    int data[3];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < 3; i++) {
        data[i] = rand() % 1000;
    }

    for (int i = 0; i < 3; i++) {
        print_divisors(data[i]);
    }

    return 0;
}