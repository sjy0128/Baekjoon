#include <stdio.h>
#define MAX 100

typedef struct {
    int x, y;
} Point;

Point qu[MAX*MAX];
int s=0, e=-1, n, m;
char g[MAX][MAX+1];
int v[MAX][MAX];

void push(int x, int y, int d);

int main(void) {
    int x, y, d;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) scanf("%s", g[i]);
    push(0, 0, 1);
    while(s <= e) {
        x = qu[s].x;
        y = qu[s].y;
        s++;
        if(x == n-1 && y == m-1) break;
        d = v[x][y] + 1;
        if(x > 0 && g[x-1][y] == '1' && !v[x-1][y]) push(x-1, y, d);
        if(x < n-1 && g[x+1][y] == '1' && !v[x+1][y]) push(x+1, y, d);
        if(y > 0 && g[x][y-1] == '1' && !v[x][y-1]) push(x, y-1, d);
        if(y < m-1 && g[x][y+1] == '1' && !v[x][y+1]) push(x, y+1, d);
    }
    printf("%d", v[n-1][m-1]);
    return 0;
}

void push(int x, int y, int d) {
    e++;
    qu[e].x = x;
    qu[e].y = y;
    v[x][y] = d;
}