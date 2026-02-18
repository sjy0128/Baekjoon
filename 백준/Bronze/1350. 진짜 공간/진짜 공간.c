#include <stdio.h>

int main(void) {
    int n, f[50], c;
    long long ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &f[i]);
    scanf("%d", &c);
    for(int i = 0; i < n; i++) ans += f[i] ? (long long)((f[i]-1)/c+1) * c : 0;
    printf("%lld", ans);
    return 0;
}