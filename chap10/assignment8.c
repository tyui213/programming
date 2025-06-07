#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 제품 정보를 저장하는 구조체 정의
typedef struct {
    char name[20];   // 제품명
    int price;       // 가격
    int stock;       // 재고
} PRODUCT;

// 제품 정보를 출력하는 함수
void print_product(PRODUCT p) {
    printf("[%s %d원 재고:%d]\n", p.name, p.price, p.stock);
}

// 입력 및 출력 담당 함수
void input_output(void)  
{
    PRODUCT item;  // 제품 정보를 담을 구조체 변수

    // 사용자로부터 제품 정보 입력받기
    printf("제품명 입력: ");
    scanf("%s", item.name);
    printf("가격 입력: ");
    scanf("%d", &item.price);
    printf("재고 입력: ");
    scanf("%d", &item.stock);

    // 제품 정보 출력
    print_product(item);
}

int main(void) {
    input_output();
    return 0;
}

