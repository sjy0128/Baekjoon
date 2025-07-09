#include <stdio.h>

int main(void) {
    int n, k, i, j, a[1000], c, m=1000;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) {
        c = 0;
        for(j=0; j<n; j++) {
            if(a[i] + (j-i) * k < 1) {
                c = n;
                break;
            }
            if(a[j] != a[i] + (j-i) * k) c++;
        }
        if(c < m) m = c;
    }
    printf("%d", m);
    return 0;
}