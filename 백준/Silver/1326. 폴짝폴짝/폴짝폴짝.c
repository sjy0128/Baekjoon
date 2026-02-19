#include <stdio.h>
#define MAX 10000

int main(void) {
    int n, s[MAX], a, b;
    int dp[MAX], qu[MAX], f=0, r=0, c;
    scanf("%d", &n);
    for(int i = 0; i < n; dp[i++] = -1) scanf("%d", &s[i]);
    scanf("%d %d", &a, &b);
    a--, b--, dp[a] = 0, qu[r++] = a;
    while(f < r && (c = qu[f++]) != b) {
        for(int i = c % s[c]; i < n; i += s[c]) {
            if(dp[i] == -1) dp[i] = dp[c] + 1, qu[r++] = i;
        }
    }
    printf("%d", c == b ? dp[b] : -1);
    return 0;
}