#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char id[21];
    char pw[21];
} LOGIN;

int main() {
    // 1. �α��� ���� 5�� �̸� ���
    LOGIN users[MAX] = {
        {"guest", "idontknow"},
        {"admin", "admin123"},
        {"user1", "pw1"},
        {"user2", "pw2"},
        {"user3", "pw3"}
    };

    char input_id[21], input_pw[21];
    int found = 0;

    printf("ID? ");
    scanf("%20s", input_id);

    // 2. ID �˻�
    for (int i = 0; i < MAX; i++) {
        if (strcmp(users[i].id, input_id) == 0) {
            found = 1;
            printf("PW: ");
            scanf("%20s", input_pw);
            // 3. PW ��
            if (strcmp(users[i].pw, input_pw) == 0) {
                printf("�α��� ����\n");
            }
            else {
                printf("��й�ȣ ����ġ\n");
            }
            break;
        }
    }
    if (!found) {
        printf("ID�� �������� �ʽ��ϴ�.\n");
    }

    return 0;
}
