#include <stdio.h>
#define MAX 1000
#define MOD 1234567

int main(void) {
    int dp[MAX][10] = {0,};
    int graph[10][10]={
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 0, 1, 0, 1, 0}
    };
    int t, n, ans[MAX]={10,};
    for(int i = 0; i < 10; i++) dp[0][i] = 1;
    for(int i = 1; i < MAX; i++) {
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < 10; k++) {
                if(graph[j][k]) dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
            }
        }
        for(int j = 0; j < 10; j++) ans[i] += dp[i][j];
        ans[i] %= MOD;
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", ans[n-1]);
    }
    return 0;
}