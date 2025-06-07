#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char id[21];
    char pw[21];
} LOGIN;

int main() {
    // 1. 로그인 정보 5개 미리 등록
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

    // 2. ID 검색
    for (int i = 0; i < MAX; i++) {
        if (strcmp(users[i].id, input_id) == 0) {
            found = 1;
            printf("PW: ");
            scanf("%20s", input_pw);
            // 3. PW 비교
            if (strcmp(users[i].pw, input_pw) == 0) {
                printf("로그인 성공\n");
            }
            else {
                printf("비밀번호 불일치\n");
            }
            break;
        }
    }
    if (!found) {
        printf("ID가 존재하지 않습니다.\n");
    }

    return 0;
}
