#include <stdio.h>

long long f(int x, int m) { return m ? x + f(x/2, m-1) + f(x/2 + x%2, m-1) : x; }

int main(void) {
    int x, m;
    scanf("%d %d", &x, &m);
    printf("%lld", f(x, m));
    return 0;
}