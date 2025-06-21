#include <stdio.h>

int main() {
    int n, m, i, j, s[2000]={0,}, t;
    scanf("%d %d\n", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &s[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n+m; j++) {
            scanf("%d", &t);
            s[i] -= t;
            s[j] += t;
        }
    }
    for(i=0; i<n+m; i++) {
        printf("%d ", s[i]);
    }
    return 0;
}