#include <stdio.h>
int main(void) {
    int t, n, i, j, f;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        f = 1;
        for(j=1; j<=n; j++) {
            f *= j;
        }
        printf("%d\n", f % 10);
    }
    return 0;
}