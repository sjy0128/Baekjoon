#include <stdio.h>

int main(void) {
    int n, a, b;
    scanf("%d\n%d %d", &n, &a, &b);
    printf("%d", n < a/2+b ? n : a/2+b);
    return 0;
}