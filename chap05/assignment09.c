#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int ham, cola, fries;
    int set_cnt;
    int ham_s, cola_s, fries_s;
    int total = 0;

    /* 1) 입력 */
    printf("햄버거 개수? ");
    scanf("%d", &ham);
    printf("콜라 개수? ");
    scanf("%d", &cola);
    printf("감자튀김 개수? ");
    scanf("%d", &fries);

    /* 2) 최대 세트 수 계산 */
    set_cnt = ham;
    if (cola < set_cnt) set_cnt = cola;
    if (fries < set_cnt) set_cnt = fries;
    printf("세트 개수? %d\n", set_cnt);

    /* 3) 단품 남은 수량 */
    ham_s = ham - set_cnt;
    cola_s = cola - set_cnt;
    fries_s = fries - set_cnt;

    /* 4) 계산서 출력 */
    printf("상품명   단가   수량    금액\n");

    if (set_cnt > 0) {
        printf("%-6s %5d %5d %8d\n",
            "세트", 6500, set_cnt, 6500 * set_cnt);
        total += 6500 * set_cnt;
    }
    if (ham_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "햄버거", 4000, ham_s, 4000 * ham_s);
        total += 4000 * ham_s;
    }
    if (fries_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "감자튀김", 2000, fries_s, 2000 * fries_s);
        total += 2000 * fries_s;
    }
    if (cola_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "콜라", 1500, cola_s, 1500 * cola_s);
        total += 1500 * cola_s;
    }

    printf("합계 %d\n", total);
    return 0;
}