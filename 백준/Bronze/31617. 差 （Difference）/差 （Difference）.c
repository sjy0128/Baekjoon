#include <stdio.h>

int main(void) {
    int k, n, m, a[100], b[100], c = 0;
    scanf("%d\n%d", &k, &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int i = 0; i < m; i++) scanf("%d", &b[i]);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) c += a[i] + k == b[j];
    }
    printf("%d", c);
    return 0;
}