#include <stdio.h>
#define MAX 1000001

int f[MAX];
long long g[MAX];

int main(void) {
    int t, n;
    for(int i = 1; i < MAX; i++) {
        for(int j = i; j < MAX; j += i) f[j] += i;
    }
    for(int i = 1; i < MAX; i++) g[i] = g[i-1] + f[i];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%lld\n", g[n]);
    }
    return 0;
}