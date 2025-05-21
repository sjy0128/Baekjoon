#include <stdio.h>

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", b > a ? a + 1 : b);
    return 0;
}