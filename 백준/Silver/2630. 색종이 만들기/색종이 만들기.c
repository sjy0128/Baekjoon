#include <stdio.h>

int m[128][128], c1=0, c2=0;

void f(int n, int x, int y);

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) scanf("%d", &m[i][j]);
    }
    f(n, 0, 0);
    printf("%d\n%d", c1, c2);
    return 0;
}

void f(int n, int x, int y) {
    int s=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) s += m[i+x][j+y];
    }
    if(!s || s == n*n) {
        if(!s) c1++;
        else c2++;
        return;
    }
    f(n/2, x, y);
    f(n/2, x+n/2, y);
    f(n/2, x, y+n/2);
    f(n/2, x+n/2, y+n/2);
}