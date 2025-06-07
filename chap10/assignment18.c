#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// SONG ����ü ����
typedef struct {
    char title[30];
    char artist[30];
    char genre[20];
    int play_time;
} SONG;

// SONG ����Ʈ (���� �� ������, 8��)
SONG song_list[8] = {
    {"thank u, next", "Ariana Grande", "pop", 208},
    {"Attention", "Charlie Puth", "pop", 211},
    {"ù��ó�� �ʿ��� ���ڴ�", "�ں���", "ballad", 316},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "��ź�ҳ��", "hip-hop", 198},
    {"����", "��ź�ҳ��", "ballad", 274},
    {"Awake", "��ź�ҳ��", "ballad", 269},
    {"�Ƴ���", "MINO", "hip-hop", 241}
};

// �÷��̸���Ʈ(�ִ� 5��)
SONG* playlist[5] = { NULL, };

// �÷��̸���Ʈ �� ����
int playlist_count = 0;

// ��ü �� ��� ��� �Լ�
void print_song_list() {
    printf("����                       ��Ƽ��Ʈ           �帣         ����ð�\n");
    for (int i = 0; i < 8; i++) {
        printf("%d: %-25s %-15s %-10s %d��\n", i + 1, song_list[i].title, song_list[i].artist, song_list[i].genre, song_list[i].play_time);
    }
}

// �÷��̸���Ʈ ��� �Լ�
void print_playlist() {
    printf("<< �÷��̸���Ʈ >>\n");
    for (int i = 0; i < playlist_count; i++) {
        printf("%-25s %-15s %-10s %d��\n",
            playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->play_time);
    }
}

// �÷��̸���Ʈ ��ü ����ð� ��� �Լ�
int calc_total_play_time() {
    int total = 0;
    for (int i = 0; i < playlist_count; i++) {
        total += playlist[i]->play_time;
    }
    return total;
}
int playlist0()
{
    int select;
    print_song_list();

    while (1) {
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &select);

        if (select == 0)
            break;

        // �� ��ȣ ��ȿ�� �˻� (1~8)
        if (select < 1 || select > 8) {
            printf("�߸��� ��ȣ�Դϴ�.\n");
            continue;
        }

        // �÷��̸���Ʈ �ִ� 5�� ����
        if (playlist_count >= 5) {
            printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
            continue;
        }

        // �÷��̸���Ʈ�� �� �߰�
        playlist[playlist_count++] = &song_list[select - 1];
        print_playlist();
        printf("�� ����ð� : %d��\n", calc_total_play_time());
    }

}
int main(void) {
    playlist0();
    return 0;
}
