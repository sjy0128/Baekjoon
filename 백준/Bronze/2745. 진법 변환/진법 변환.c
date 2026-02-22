#include <stdio.h>

int c2n(const char c) { return c >= '0' && c <= '9' ? c - '0' : c - 'A' + 10; }

int main(void) {
    int b, ans = 0;
    char n[32];
    scanf("%s %d", n, &b);
    for(int i = 0; n[i]; i++) ans = ans * b + c2n(n[i]);
    printf("%d", ans);
    return 0;
}