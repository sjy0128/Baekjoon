#include <stdio.h>

int n, m, v[9], a[8];

void f(int d);

int main(void) {
    scanf("%d %d", &n, &m);
    f(0);
    return 0;
}

void f(int d) {
    if(d == m) {
        for(int i=0; i<m; i++) printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++) {
        if(!v[i]) {
            a[d] = i;
            v[i] = 1;
            f(d+1);
            v[i] = 0;
        }
    }
}