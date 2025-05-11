#include <stdio.h>

int main(void) {
    int r, c, n;
    scanf("%d %d %d", &r, &c, &n);
    printf("%lld", (long long)(r%n==0 ? r/n : r/n+1) * (c%n==0 ? c/n: c/n+1));
    return 0;
}