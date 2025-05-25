#include <stdio.h>

int main(void) {
    int g, p, t;
    scanf("%d %d %d", &g, &p, &t);
    printf("%d", g*p == g + p*t ? 0 : (g*p < g + p*t ? 1 : 2));
    return 0;
}