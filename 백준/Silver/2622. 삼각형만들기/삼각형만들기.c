#include <stdio.h>

int main(void) {
    int n, sum = 0, max, ans = 0;
    scanf("%d", &n);
    for(int a = 1; a <= n / 3; a++) {
        for(int b = a, c = n - a*2; b <= (n - a) / 2; b++, c--) {
            sum = a + b + c;
            max = a >= b && b >= c ? a : (b >= c && c >= a ? b : c);
            if(sum - max > max) ans++;
        }
    }
    printf("%d", ans);
    return 0;
}