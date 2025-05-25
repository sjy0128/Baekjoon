#include <stdio.h>

int main(void) {
    int a, b, n, i, e;
    scanf("%d %d\n%d", &a, &b, &n);
    for(i=0; i<n; i++) {
        scanf("%d", &e);
        printf("%d %d\n", e, e > 1000 ? a*1000 + b*(e-1000) : e*a);
    }
    return 0;
}