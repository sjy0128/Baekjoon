#include <stdio.h>

int main(void) {
    int n, i, rain;
    long long angry=0, total=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &rain);
        if(rain) total += ++angry;
        else total += --angry;
    }
    printf("%lld", total);
    return 0;
}