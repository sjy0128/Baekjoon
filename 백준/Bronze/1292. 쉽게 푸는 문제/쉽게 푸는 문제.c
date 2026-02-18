#include <stdio.h>

int main(void) {
    int a, b, ans = 0;
    scanf("%d %d", &a, &b);
    for(int i = 1, j = 1, k = 0; i <= b; i++) {
        if(a <= i) ans += j;
        k++;
        if(k == j) j++, k = 0;
    }
    printf("%d", ans);
    return 0;
}