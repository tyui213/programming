#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ǰ ������ �����ϴ� ����ü ����
typedef struct {
    char name[20];   // ��ǰ��
    int price;       // ����
    int stock;       // ���
} PRODUCT;

// ��ǰ ������ ����ϴ� �Լ�
void print_product(PRODUCT p) {
    printf("[%s %d�� ���:%d]\n", p.name, p.price, p.stock);
}

// �Է� �� ��� ��� �Լ�
void input_output(void)  
{
    PRODUCT item;  // ��ǰ ������ ���� ����ü ����

    // ����ڷκ��� ��ǰ ���� �Է¹ޱ�
    printf("��ǰ�� �Է�: ");
    scanf("%s", item.name);
    printf("���� �Է�: ");
    scanf("%d", &item.price);
    printf("��� �Է�: ");
    scanf("%d", &item.stock);

    // ��ǰ ���� ���
    print_product(item);
}

int main(void) {
    input_output();
    return 0;
}

