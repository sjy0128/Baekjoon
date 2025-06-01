#include <stdio.h>
int main(void) {
    int p, q, a, b;
    scanf("%d %d\n%d %d", &p, &q, &a, &b);
    printf("%d", q > p ? p*a + (q-p)*b : q*a);
    return 0;
}