#include <stdio.h>

int nCr(int n, int r);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", nCr(n, 4));
    return 0;
}

int nCr(int n, int r) {
    int v = 1;
    if(r > n) return 0;
    for(int i = 0; i < (r <= n/2 ? r : n-r); i++) {
        v *= n - i;
        v /= i + 1;
    }
    return v;
}