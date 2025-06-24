#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j=2;
    scanf("%d %d", &m, &n);
    int *a = (int *)calloc(n+1, sizeof(int));
    a[1] = 1;
    for(j=2; j*j <= n; j++) {
        for(i=j*j; i<=n; i+=j) {
            a[i] = 1;
        }
    }
    for(i=m; i<=n; i++) {
        if(!a[i]) printf("%d\n", i);
    }
    free(a);
    return 0;
}