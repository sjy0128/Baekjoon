#include <stdio.h>
#define MAX 1000

typedef struct {
    int x, y;
} Point;

Point qu[MAX*MAX];
int s=0, e=-1, n, m;
int g[MAX][MAX], v[MAX][MAX];

void push(int x, int y);

int main(void) {
    int x, y, t, d=0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &g[i][j]);
            v[i][j] = -1;
            if(g[i][j] == 2) push(i, j);
        }
    }
    while(s <= e) {
        t = e;
        for(int i=s; i<=t; i++) {
            x = qu[s].x;
            y = qu[s].y;
            s++;
            if(v[x][y] == -1) {
                v[x][y] = d;
                if(x > 0 && g[x-1][y]) push(x-1, y);
                if(x < n-1 && g[x+1][y]) push(x+1, y);
                if(y > 0 && g[x][y-1]) push(x, y-1);
                if(y < m-1 && g[x][y+1]) push(x, y+1);
            }
        }
        d++;
        s = t+1;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) printf("%d ", v[i][j] == -1 ? (!g[i][j] ? 0 : -1) : v[i][j]);
        printf("\n");
    }
}

void push(int x, int y) {
    e++;
    qu[e].x = x;
    qu[e].y = y;
}