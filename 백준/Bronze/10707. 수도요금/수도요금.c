#include <stdio.h>
int main(void) {
    int a, b, c, d, p, x, y;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &p);
    x = a * p;
    y = b + (p > c ? (p - c) * d : 0);
    printf("%d", x < y ? x : y);
    return 0;
}