#include <stdio.h>

int main(void) {
    int n, k, a, b;
    scanf("%d %d %d %d", &n, &k, &a, &b);
    printf("%d %d", b*(k-2+n), a*(n-1));
    return 0;
}