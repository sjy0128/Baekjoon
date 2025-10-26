#include <stdio.h>
#define MAX 15

int b[MAX][MAX], n, answer;

int judge(int x, int y);
void backTracking(int x, int y);

int main(void) {
    scanf("%d", &n);
    backTracking(0, 0);
    printf("%d", answer);
    return 0;
}

int judge(int x, int y) {
    int i, j;
    for(i=0; i<n; i++) {
        if(b[i][y]) return 0;
    }
    i = x-1, j = y-1;
    while(i >= 0 && j >= 0) {
        if(b[i--][j--]) return 0;
    }
    i = x-1, j = y+1;
    while(i >= 0 && j < n) {
        if(b[i--][j++]) return 0;
    }
    i = x+1, j = y-1;
    while(i < n && j >= 0) {
        if(b[i++][j--]) return 0;
    }
    i = x+1, j = y+1;
    while(i < n && j < n) {
        if(b[i++][j++]) return 0;
    }
    return 1;
}

void backTracking(int x, int y) {
    if(x == n) answer++;
    else {
        for(int i=0; i<n; i++) {
            if(judge(x, i)) {
                if(x == n-1) {
                    answer++;
                    continue;
                }
                b[x][i] = 1;
                backTracking(x+1, 0);
                b[x][i] = 0;
            }
        }
        return;
    }
}