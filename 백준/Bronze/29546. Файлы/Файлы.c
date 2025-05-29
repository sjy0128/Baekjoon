#include <stdio.h>

int main(void) {
    int n, m, l, r, i, j;
    char p[1000][101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", p[i]);
    }
    scanf("%d", &m);
    for(i=0; i<m; i++) {
        scanf("%d %d", &l, &r);
        for(j=l-1; j<r; j++) {
            printf("%s\n", p[j]);
        }
    }
    return 0;
}