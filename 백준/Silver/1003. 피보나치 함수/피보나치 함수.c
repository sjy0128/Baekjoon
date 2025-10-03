#include <stdio.h>

int main(void) {
    int t, n, dp0[41]={1,}, dp1[41]={0,1,};
    for(int i=2; i<=40; i++) dp0[i] = dp0[i-1] + dp0[i-2], dp1[i] = dp1[i-1] + dp1[i-2];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%d %d\n", dp0[n], dp1[n]);
    }
    return 0;
}