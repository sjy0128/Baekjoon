#include <stdio.h>

int main(void) {
    int a, b;
    long long ai, bi;
    scanf("%d %d", &a, &b);
    ai = a;
    bi = b;
    while(ai != bi) {
        if(ai >= bi) bi += b;
        else ai += a;
    }
    printf("%lld", ai);
    return 0;
}