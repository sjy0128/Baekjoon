#include <stdio.h>

int m[2187][2187], c[3];

void f(int n, int x, int y);

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) scanf("%d", &m[i][j]);
    }
    f(n, 0, 0);
    for(int i=0; i<3; i++) printf("%d\n", c[i]);
    return 0;
}

void f(int n, int x, int y) {
    int t = m[x][y];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(m[x+i][y+j] != t) t = -2;
        }
    }
    if(t != -2) {
        c[t+1]++;
        return;
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) f(n/3, x+i*n/3, y+j*n/3);
    }
}