#include <stdio.h>

int s[9][9], solved;

int judge(int a, int x, int y);
void backTracking(int x, int y);

int main(void) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) scanf("%d", &s[i][j]);
    }
    backTracking(0, 0);
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) printf("%d ", s[i][j]);
        printf("\n");
    }
    return 0;
}

int judge(int a, int x, int y) {
    for(int i=0; i<9; i++) {
        if(s[x][i] == a || s[i][y] == a || s[x/3*3+i/3][y/3*3+i%3] == a) return 0;
    }
    return 1;
}

void backTracking(int x, int y) {
    if(x == 9) {
        solved = 1;
        return;
    } else if(y == 9) backTracking(x+1, 0);
    else if(s[x][y]) backTracking(x, y+1);
    else {
        for(int i=1; i<=9; i++) {
            if(judge(i, x, y)) {
                s[x][y] = i;
                backTracking(x, y+1);
                if(solved) return;
                s[x][y] = 0;
            }
        }
    }
}