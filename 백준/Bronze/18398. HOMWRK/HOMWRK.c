#include <stdio.h>

int main() {
    int t, n, a, b, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%d %d", &a, &b);
            printf("%d %d\n", a + b, a * b);
        }
    }
    return 0;
}