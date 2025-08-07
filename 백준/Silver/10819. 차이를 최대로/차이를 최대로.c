#include <stdio.h>

int n, a[8], v[8], r[8], m;

void f(int d);
int abs(int a);

int main(void) {
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    f(0);
    printf("%d", m);
}

void f(int d) {
    if(d == n) {
        int s=0;
        for(int i=0; i<n-1; i++) {
            s += abs(r[i] - r[i+1]);
        }
        if(s > m) m = s;
        return;
    }
    for(int i=0; i<n; i++) {
        if(!v[i]) {
            v[i] = 1;
            r[d] = a[i];
            f(d + 1);
            v[i] = 0;
        }
    }
}

int abs(int a) {return a > 0 ? a : -a;}