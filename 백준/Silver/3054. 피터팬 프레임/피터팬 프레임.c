#include <stdio.h>
#define MAX 16
#define FRAME_MAX 70

int _strlen(const char *str);
void decoFrame(int y, char c, int t);

char frame[5][FRAME_MAX];

int main(void) {
    int len, frame_len;
    char word[MAX];
    scanf("%s", word);
    len = _strlen(word);
    frame_len = len * 4 + 1;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < frame_len; j++) {
            frame[i][j] = '.';
        }
        frame[i][frame_len] = '\0';
    }
    for(int i = 0; i < len; i++) {
        if(!((i + 1) % 3)) continue;
        decoFrame(i * 4 + 2, word[i], 1);
    }
    for(int i = 0; i < len; i++) {
        if(((i + 1) % 3)) continue;
        decoFrame(i * 4 + 2, word[i], 2);
    }
    for(int i = 0; i < 5; i++) printf("%s\n", frame[i]);
    return 0;
}

int _strlen(const char *str) {
    int l = 0;
    while(str[l]) l++;
    return l;
}

void decoFrame(int y, char c, int t) {
    frame[2][y] = c;
    for(int i = 0; i < 2; i++) {
        frame[2-i][y-2+i] = frame[i][y+i] = frame[2+i][y+2-i] = frame[4-i][y-i] = t == 1 ? '#' : '*';
    }
}