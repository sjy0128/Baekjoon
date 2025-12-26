#include <stdio.h>

int abs(int a) { return a > 0 ? a : -a; }

int main(void) {
    int a, b, n, min, f;
    scanf("%d %d\n%d", &a, &b, &n);
    min = abs(a - b);
    for(int i = 0; i < n; i++) {
        scanf("%d", &f);
        if(abs(f - b) + 1 < min) min = abs(f - b) + 1;
    }
    printf("%d", min);
    return 0;
}