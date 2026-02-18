#include <stdio.h>
#define MAX 1000000

int dp[MAX + 1], qu[MAX], f, r;

int main(void) {
    int a, k, c;
    scanf("%d %d", &a, &k);
    qu[r++] = a;
    do {
        c = qu[f++];
        if(c+1 <= MAX && !dp[c+1]) dp[c+1] = dp[c] + 1, qu[r++] = c+1;
        if(c*2 <= MAX && !dp[c*2]) dp[c*2] = dp[c] + 1, qu[r++] = c*2;
    } while(f < r && a+1 != k && a*2 != k);
    printf("%d", dp[k]);
    return 0;
}