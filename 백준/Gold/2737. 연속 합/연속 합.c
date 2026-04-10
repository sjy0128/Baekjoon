#include <stdio.h>

int main(void) {
    int t, n, cur, min, ans;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        ans = 0, cur = 2, min = 3;
        while(min <= n) {
            ans += n % cur == !(cur % 2) * (cur / 2);
            min += ++cur;
        }
        printf("%d\n", ans);
    }
}