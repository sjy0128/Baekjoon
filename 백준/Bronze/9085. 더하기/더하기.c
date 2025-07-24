#include <stdio.h>

int main() {
    int t, n, i, j, a, s;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        s = 0;
        for(j=0; j<n; j++) {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", s);
    }
    return 0;
}