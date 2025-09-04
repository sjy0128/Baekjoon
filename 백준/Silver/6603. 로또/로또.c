#include <stdio.h>

int n, a[13], v[13], r[6];

void f(int d);

int main(void) {
    while(1) {
        scanf("%d", &n);
        if(!n) break;
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            v[i] = 0;
        }
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(a[i] > a[j]) a[i] ^= a[j] ^= a[i] ^= a[j];
            }
        }
        f(0);
        printf("\n");
    }
    return 0;
}

void f(int d) {
    if(d == 6) {
        for(int i=0; i<6; i++) printf("%d ", r[i]);
        printf("\n");
    }
    for(int i=0; i<n; i++) {
        if(!v[i] && !d || a[i] > r[d-1]) {
            v[i] = 1;
            r[d] = a[i];
            f(d+1);
            v[i] = 0;
        }
    }
}