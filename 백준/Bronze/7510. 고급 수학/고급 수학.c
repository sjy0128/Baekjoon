#include <stdio.h>

int f(int a, int b, int c) { return (long long)a * a + b * b == c * c; }
int is_right(int a, int b, int c) { return f(a, b, c) || f(b, c, a) || f(c, a, b); }

int main(void) {
    int n, a, b, c;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("Scenario #%d:\n", i);
        printf(is_right(a, b, c) ? "yes\n" : "no\n");
        printf("\n");
    }
    return 0;
}