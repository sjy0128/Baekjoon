#include <stdio.h>

int main(void) {
    int n, a[10], m, b, i, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d", &b);
        sum += a[b-1];
    }
    printf("%d", sum);
    return 0;
}