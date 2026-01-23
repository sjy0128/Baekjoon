#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, a[MAX], dp[MAX] = {0,}, k, max = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = n - 1; i >= 0; i--) {
        k = 0;
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j] && dp[j] > k) k = dp[j];
        }
        dp[i] = k + 1;
        if(dp[i] > max) max = dp[i];
    }
    printf("%d", max);
    return 0;
}