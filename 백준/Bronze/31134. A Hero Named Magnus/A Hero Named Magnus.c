#include <stdio.h>
int main(void) {
    int t, x, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &x);
        printf("%lld\n", (long long)x*2-1);
    }
    return 0;
}