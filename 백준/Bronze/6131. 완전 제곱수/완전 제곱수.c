#include <stdio.h>

int main(void) {
    int n, ans = 0;
    scanf("%d", &n);
    for(int a = 1; a <= 500; a++) {
        for(int b = 1; b <= a; b++) {
            ans += a * a == b * b + n;
        }
    }
    printf("%d", ans);
    return 0;
}