#include <stdio.h>

long long merge(int a, int b);

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%lld", merge(a, b) + merge(c, d));
    return 0;
}

long long merge(int a, int b) {
    long long r = 1;
    while(b >= r) r *= 10;
    return a * r + b;
}