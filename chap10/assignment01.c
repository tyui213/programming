#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1. LOGIN 구조체 선언
typedef struct {
    char id[21];     // 최대 20자 + null
    char pw[21];
} LOGIN;

// 2. pw를 *로 출력하는 함수
void print_login(LOGIN user) {
    printf("ID: %s\n", user.id);
    printf("Password? ");
    for (int i = 0; i < strlen(user.pw); i++)
        printf("*");
    printf("\n");
}

int main() {
    LOGIN user;
    printf("ID? ");
    scanf("%20s", user.id);
    printf("Password? ");
    scanf("%20s", user.pw);

    print_login(user);

    return 0;
}
