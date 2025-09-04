#include <stdio.h>

int m[64][64];

void f(int n, int x, int y);

int main(void) {
    int n;
    char t;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf(" %c", &t);
            m[i][j] = t-'0';
        }
    }
    f(n, 0, 0);
    return 0;
}

void f(int n, int x, int y) {
    int s=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) s += m[i+x][j+y];
    }
    if(!s || s == n*n) {
        if(!s) printf("0");
        else printf("1");
        return;
    }
    printf("(");
    f(n/2, x, y);
    f(n/2, x, y+n/2);
    f(n/2, x+n/2, y);
    f(n/2, x+n/2, y+n/2);
    printf(")");
}