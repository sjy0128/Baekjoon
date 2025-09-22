#include <stdio.h>
#define MAX 100

int n, v[MAX][MAX], c, qu[MAX*MAX][2], s, e;
char m[MAX][MAX+1];

void initV(void);
void bfs(void);
void bfsSub(int x, int y, char c);
int f(int x, int y, char c);
int judge(int x, int y, char c);
void visit(int x, int y);
void push(int x, int y);
void pop(int *a, int *b);

int main(void) {
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%s", m[i]);
    bfs();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(m[i][j] == 'R') m[i][j] = 'G';
        }
    }
    bfs();
    return 0;
}

void initV(void) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) v[i][j] = 0;
    }
}

void bfs(void) {
    int c=0;
    initV();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(!v[i][j]) {
                bfsSub(i, j, m[i][j]);
                c++;
            }
        }
    }
    printf("%d ", c);
}

void bfsSub(int x, int y, char c) {
    int a, b;
    s = 0;
    e = -1;
    visit(x, y);
    while(s <= e) {
        pop(&a, &b);
        f(a-1, b, c);
        f(a, b-1, c);
        f(a, b+1, c);
        f(a+1, b, c);
    }
}

int f(int x, int y, char c) {
    if(judge(x, y, c)) visit(x, y);
}

int judge(int x, int y, char c) {
    return x >= 0 && x < n && y >= 0 && y < n && !v[x][y] && m[x][y] == c;
}

void visit(int x, int y) {
    push(x, y);
    v[x][y] = 1;
}

void push(int x, int y) {
    e++;
    qu[e][0] = x, qu[e][1] = y;
}

void pop(int *a, int *b) {
    *a = qu[s][0];
    *b = qu[s][1];
    s++;
}