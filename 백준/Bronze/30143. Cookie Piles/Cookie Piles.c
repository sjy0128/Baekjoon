#include <stdio.h>
int main(void) {
    int t, n, a, d, i, j, x, y;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &n, &a, &d);
        x = a;
        y = x;
        for(j=0; j<n-1; j++) {
            x += d;
            y += x;
        }
        printf("%d\n", y);
    }
    return 0;
}