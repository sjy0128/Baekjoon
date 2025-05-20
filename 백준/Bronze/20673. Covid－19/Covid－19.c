#include <stdio.h>

int main() {
    int p, q;
    scanf("%d %d", &p, &q);
    printf(p <= 50 && q <= 10 ? "White" : (q > 30 ? "Red" : "Yellow"));
    return 0;
}