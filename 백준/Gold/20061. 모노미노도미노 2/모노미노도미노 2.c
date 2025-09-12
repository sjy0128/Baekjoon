#include <stdio.h>

void processInfo(int g[6][4], int b[6][4]);
void fall(int a[6][4], int y, int h, int w);
void deleteLine(int a[6][4], int l);

int score=0;

int main(void) {
    int g[6][4]={0,}, b[6][4]={0,}, n, c=0;
    scanf("%d", &n);
    while(n--) processInfo(g, b);
    for(int i=2; i<6; i++) {
        for(int j=0; j<4; j++) c += g[i][j] + b[i][j];
    }
    printf("%d\n%d", score, c);
    return 0;
}

void processInfo(int g[6][4], int b[6][4]) {
    int t, x, y;
    scanf("%d %d %d", &t, &x, &y);
    switch(t) {
        case 1:
            fall(g, y, 1, 1);
            fall(b, x, 1, 1);
            break;
        case 2:
            fall(g, y, 1, 2);
            fall(b, x, 2, 1);
            break;
        case 3:
            fall(g, y, 2, 1);
            fall(b, x, 1, 2);
    }
}

void fall(int a[6][4], int y, int h, int w) {
    int x=0;
    if(w == 2) while(!a[x+h][y] && !a[x+h][y+1] && x+h < 6) x++;
    else while(!a[x+h][y] && x+h < 6) x++;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) a[x+i][y+j] = 1;
    }
    for(int i=2; i<6; i++) {
        if(a[i][0] && a[i][1] && a[i][2] && a[i][3]) {
            score++;
            deleteLine(a, i);
        }
    }
    while(a[1][0] || a[1][1] || a[1][2] || a[1][3]) deleteLine(a, 5);
}

void deleteLine(int a[6][4], int l) {
    for(int i=l; i>0; i--) {
        for(int j=0; j<4; j++) {
            a[i][j] = a[i-1][j];
        }
    }
    for(int i=0; i<4; i++) a[0][i] = 0;
}