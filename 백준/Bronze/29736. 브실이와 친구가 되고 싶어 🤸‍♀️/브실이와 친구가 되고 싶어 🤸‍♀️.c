#include <stdio.h>

int main(void) {
    int a, b, k, x, f;
    scanf("%d %d\n%d %d", &a, &b, &k, &x);
    f = (b < k+x ? b : k+x) - (a > k-x ? a : k-x) + 1;
    if(f > 0) printf("%d", f);
    else printf("IMPOSSIBLE");
    return 0;
}