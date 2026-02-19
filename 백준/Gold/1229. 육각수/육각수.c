#include <stdio.h>
#define MAX 1000000

short dp[MAX + 1];
int qu[MAX], f, r;

int main(void) {
    int h[1000]={1,}, n, c;
    scanf("%d", &n);
    for(int i = 1, j; (j = h[i-1]+(i*4+1)) <= n; i++) dp[qu[r++] = h[i] = j] = 1;
    dp[qu[r++] = 1] = 1;
    while(f < r && (c = qu[f++]) != n) {
        for(int i = 0, j; (j = c + h[i]) <= n; i++) {
            if(!dp[j]) dp[qu[r++] = j] = dp[c] + 1;
        }
    }
    printf("%hd", dp[n]);
    return 0;
}