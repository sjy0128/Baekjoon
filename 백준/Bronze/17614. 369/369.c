#include <stdio.h>

int func(int a) {
    int r = 0, t;
    while(a) r += !!(t = a % 10) * !(t % 3), a /= 10;
    return r;
}

int main(void) {
    int n, ans = 0;
    scanf("%d", &n);
    while(n) ans += func(n--);
    printf("%d", ans);
    return 0;
}