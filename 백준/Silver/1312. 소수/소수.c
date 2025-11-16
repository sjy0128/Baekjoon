#include <stdio.h>

int main(void) {
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &n);
    for(int i=0; i<=n; i++) {
        c = a / b;
        a = (a % b) * 10;
    }
    printf("%d", c);
    return 0;
}