#include <stdio.h>

int main(void) {
    int x, n, t;
    scanf("%d %d", &x, &n);
    for(t=0; t<n; t++) {
        x = (x % 2 == 0 ? x/2 : 2*x) ^ 6;
    }
    printf("%d", x);
    return 0;
}