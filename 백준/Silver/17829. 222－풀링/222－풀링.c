#include <stdio.h>

int n, m[1024][1024];
int f(int n, int x, int y);

int main(void) {
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) scanf("%d", &m[i][j]);
    }
    printf("%d", f(n, 0, 0));
    return 0;
}

int f(int n, int x, int y) {
    if(n == 1) return m[x][y];
    int a[4];
    a[0] = f(n/2, x, y);
    a[1] = f(n/2, x, y+n/2);
    a[2] = f(n/2, x+n/2, y);
    a[3] = f(n/2, x+n/2, y+n/2);
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<4; j++) {
            if(a[i] < a[j]) a[i] ^= a[j] ^= a[i] ^= a[j];
        }
    }
    return a[1];
}