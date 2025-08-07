#include <stdio.h>

int n, m, a[8];

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
        if(!d || i >= a[d-1]) {
            a[d] = i;
            f(d+1);
        }
    }
}