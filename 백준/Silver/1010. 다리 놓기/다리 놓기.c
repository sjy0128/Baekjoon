#include <stdio.h>

int main() {
    int t, i, j, n, m;
    long long int b;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        b = 1;
        for(j=0; j<n; j++) {
            b *= m-j;
            b /= j+1;
        }
        printf("%lld\n", b);
    }
    return 0;
}