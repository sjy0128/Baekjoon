#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int n, m, s, e, t, c;
short a[MAX][MAX];
short qu[MAX*MAX][2];

void enqueue(int x, int y);
void process(int x, int y);
void ripe(int x, int y);
int judge(int x, int y);
int inOfRange(int x, int y);

int main(void) {
    int temp, x, y;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%hd", &a[i][j]);
            if(!a[i][j]) t++;
            if(a[i][j] == 1) enqueue(i, j);
        }
    }
    while(s < e) {
        if(!t) break;
        temp = e;
        for(int i=s; i<temp; i++) {
            x = qu[i][0], y = qu[i][1];
            process(x-1, y);
            process(x, y-1);
            process(x, y+1);
            process(x+1, y);
        }
        s = temp;
        c++;
    }
    printf("%d", !t ? c : -1);
    return 0;
}

void enqueue(int x, int y) {
    qu[e][0] = x;
    qu[e][1] = y;
    e++;
}

void process(int x, int y) {
    if(judge(x, y)) ripe(x, y);
}

void ripe(int x, int y) {
    a[x][y] = 1;
    t--;
    enqueue(x, y);
}

int judge(int x, int y) {
    return inOfRange(x, y) && !a[x][y];
}

int inOfRange(int x, int y) {
    return x >= 0 && x < m && y >= 0 && y < n;
}