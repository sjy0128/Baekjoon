#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d", &n);
        printf("%lld\n", (long long)n*n);
    }
    return 0;
}