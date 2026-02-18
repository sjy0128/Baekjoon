#include <stdio.h>

int main(void) {
    int n, ans = 0, i = 0, m[] = {500, 100, 50, 10, 5, 1};
    scanf("%d", &n);
    n = 1000 - n;
    while(n) ans += n / m[i], n %= m[i++];
    printf("%d", ans);
    return 0;
}