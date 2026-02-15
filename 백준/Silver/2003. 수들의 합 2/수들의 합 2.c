#include <stdio.h>
#define MAX 10000

int main(void) {
    int n, m, a[MAX+1] = {0,}, i, j, sum, ans = 0;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        a[i] += a[i-1];
    }
    i = j = 1;
    while(j <= n) {
        sum = a[j] - a[i-1];
        if(sum == m) ans++;
        if(sum >= m) i++;
        else ++j;
        if(i > j) j = i;
    }
    printf("%d", ans);
    return 0;
}