#include <stdio.h>

int main(void) {
    int t, n, dp[11]={1,};
    for(int i=1; i<11; i++) {
        dp[i] = dp[i-1];
        if(i >= 2) dp[i] += dp[i-2];
        if(i >= 3) dp[i] += dp[i-3];
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}