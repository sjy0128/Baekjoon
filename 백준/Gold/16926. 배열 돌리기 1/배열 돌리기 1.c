#include <stdio.h>

int n, m, a[300][300];

void rotate(int x1, int y1, int x2, int y2);

int main(void) {
    int r;
    scanf("%d %d %d", &n, &m, &r);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) scanf("%d", &a[i][j]);
    }
    while(r--) rotate(0, 0, n-1, m-1);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

void rotate(int x1, int y1, int x2, int y2) {
    int x=x1, y=y1, t=a[x1][y1];
    for(; y<y2; y++) a[x][y] = a[x][y+1];
    for(; x<x2; x++) a[x][y] = a[x+1][y];
    for(; y>y1; y--) a[x][y] = a[x][y-1];
    for(; x>x1+1; x--) a[x][y] = a[x-1][y];
    a[x][y] = t;
    if(x2 - x1 == 1 || y2 - y1 == 1) return;
    rotate(x1 + 1, y1 + 1, x2 - 1, y2 - 1);
}