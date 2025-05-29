#include <stdio.h>
int main(void) {
    int s, d, i, l, n, sum;
    scanf("%d %d %d %d %d", &s, &d, &i, &l, &n);
    sum = s + d + i + l;
    printf("%d", sum >= n*4 ? 0 : n*4 - sum);
    return 0;
}