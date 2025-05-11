#include <stdio.h>

int main(void) {
    int k, n, m;
    scanf("%d %d %d", &k, &n, &m);
    printf("%d", m >= k*n ? 0 : k*n-m);
    return 0;
}