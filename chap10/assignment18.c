#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// SONG 구조체 정의
typedef struct {
    char title[30];
    char artist[30];
    char genre[20];
    int play_time;
} SONG;

// SONG 리스트 (예제 곡 데이터, 8곡)
SONG song_list[8] = {
    {"thank u, next", "Ariana Grande", "pop", 208},
    {"Attention", "Charlie Puth", "pop", 211},
    {"첫눈처럼 너에게 가겠다", "박보람", "ballad", 316},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "방탄소년단", "hip-hop", 198},
    {"봄날", "방탄소년단", "ballad", 274},
    {"Awake", "방탄소년단", "ballad", 269},
    {"아낙네", "MINO", "hip-hop", 241}
};

// 플레이리스트(최대 5곡)
SONG* playlist[5] = { NULL, };

// 플레이리스트 곡 개수
int playlist_count = 0;

// 전체 곡 목록 출력 함수
void print_song_list() {
    printf("제목                       아티스트           장르         재생시간\n");
    for (int i = 0; i < 8; i++) {
        printf("%d: %-25s %-15s %-10s %d초\n", i + 1, song_list[i].title, song_list[i].artist, song_list[i].genre, song_list[i].play_time);
    }
}

// 플레이리스트 출력 함수
void print_playlist() {
    printf("<< 플레이리스트 >>\n");
    for (int i = 0; i < playlist_count; i++) {
        printf("%-25s %-15s %-10s %d초\n",
            playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->play_time);
    }
}

// 플레이리스트 전체 재생시간 계산 함수
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
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &select);

        if (select == 0)
            break;

        // 곡 번호 유효성 검사 (1~8)
        if (select < 1 || select > 8) {
            printf("잘못된 번호입니다.\n");
            continue;
        }

        // 플레이리스트 최대 5곡 제한
        if (playlist_count >= 5) {
            printf("플레이리스트가 가득 찼습니다.\n");
            continue;
        }

        // 플레이리스트에 곡 추가
        playlist[playlist_count++] = &song_list[select - 1];
        print_playlist();
        printf("총 재생시간 : %d초\n", calc_total_play_time());
    }

}
int main(void) {
    playlist0();
    return 0;
}
