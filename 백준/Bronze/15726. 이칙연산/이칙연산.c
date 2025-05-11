#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld", (long long)a*(b>c?b:c)/(b<c?b:c));
    return 0;
}