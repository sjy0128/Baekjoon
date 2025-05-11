#include <stdio.h>

int main(void) {
    int n, a, b, c, d, x, y;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    x = b*(n%a==0 ? n/a : n/a+1);
    y = d*(n%c==0 ? n/c : n/c+1);
    printf("%d", x < y ? x : y);
    return 0;
}