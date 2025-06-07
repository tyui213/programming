#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double t;
    char unit;

    printf("¿Âµµ? ");
    scanf("%lf %c", &t, &unit);

    if (unit == 'C') {
        double f = t * 9.0 / 5.0 + 32.0;
        printf("%.2f C ==> %.2f F\n", t, f);
    }
    else if (unit == 'F') {
        double c = (t - 32.0) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C\n", t, c);
    }

    return 0;
}