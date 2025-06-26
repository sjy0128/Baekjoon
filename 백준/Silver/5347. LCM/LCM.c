#include <stdio.h>

int main() {
    int n, i, a, b;
    long long aj, bj;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        aj = a;
        bj = b;
        while(aj != bj) {
            if(aj > bj) bj += b;
            else aj += a;
        }
        printf("%lld\n", aj);
    }
    return 0;
}