#include <stdio.h>

int n, m, a[8], v[8], r[8];

void f(int d);

int main(void) {
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                a[i] ^= a[j] ^= a[i] ^= a[j];
            }
        }
    }
    f(0);
    return 0;
}

void f(int d) {
    if(d == m) {
        for(int i=0; i<m; i++) printf("%d ", r[i]);
        printf("\n");
        return;
    }
    for(int i=0; i<n; i++) {
        if(!v[i] && (!d || a[i] > r[d-1])) {
            r[d] = a[i];
            v[i] = 1;
            f(d+1);
            v[i] = 0;
        }
    }
}