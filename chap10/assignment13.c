#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �� ������ �����ϴ� ����ü ����
typedef struct {
    int x;
    int y;
} POINT;

// ���簢�� ������ �����ϴ� ����ü ���� (�� ������ ����)
typedef struct {
    POINT left_bottom;  // ���ϴ���
    POINT right_top;    // ������
} RECT;

// ���簢�� ������ ����ϴ� �Լ�
void print_rect(RECT r) {
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y, r.right_top.x, r.right_top.y);
}

int input_output(void) {
    RECT rect;

    // ���ϴ��� �Է�
    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // ������ �Է�
    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // ���簢�� ���� ���
    print_rect(rect);

}
int main(void) {
    input_output();
    return 0;
}
