#include <stdio.h>

int main(void) {
    int n, m, a[1000000], b[1000000], i, j=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    i = 0;
    while(i < n && j < m) {
        if(a[i] < b[j]) printf("%d ", a[i++]);
        else printf("%d ", b[j++]);
    }
    while(i < n) printf("%d ", a[i++]);
    while(j < m) printf("%d ", b[j++]);
    return 0;
}