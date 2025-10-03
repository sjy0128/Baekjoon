#include <stdio.h>

int min(int a, int b) {return a < b ? a : b;}

int main(void) {
    int n, dp[1000000]={0,};
    scanf("%d", &n);
    for(int i=2; i<=n; i++) {
        dp[i-1] = dp[i-2]+1;
        if(!(i % 2)) dp[i-1] = min(dp[i-1], dp[i/2-1]+1);
        if(!(i % 3)) dp[i-1] = min(dp[i-1], dp[i/3-1]+1);
    }
    printf("%d", dp[n-1]);
    return 0;
}