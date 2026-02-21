#include <stdio.h>

int main(void) {
    int n, ans, cur;
    while(scanf("%d", &n) != -1) {
        ans = cur = 0;
        do {
            cur = (cur * 10 + 1) % n;
            ans++;
        } while(cur);
        printf("%d\n", ans);
    }
    return 0;
}