#include <stdio.h>

int main(void) {
    int n, x, s, i, c, p, max=0;
    scanf("%d\n%d %d", &n, &x, &s);
    for(i=0; i<n; i++) {
        scanf("%d %d", &c, &p);
        if(c <= x && p > max) max = p;
    }
    printf(max > s ? "YES" : "NO");
    return 0;
}